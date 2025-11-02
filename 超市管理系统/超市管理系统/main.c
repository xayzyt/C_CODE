#include <stdio.h>
#include <stdlib.h>
#define NUM 3
//开始菜单
int menu()
{
	int select;
	printf("请选择数字进行操作；\n");
	printf("1.建立库存信息\n");
	printf("2.显示库存信息\n");
	printf("3.购物车\n");
	printf("4.结算\n");
	printf("5.退出系统\n");
	printf("请选择对应数字1-5\n");

	while (1)
	{
		scanf("%d", &select);			//从键盘获取数据存入变量
		if (select < 1 || select >5)
		{
			printf("输入错误，请重新输入1-5之间的数字\n");
		}
		else
		{
			break;
		}
		
	}
	return select;
}

//商品 名字   商品编号  进价    售价    数量
//     char   char      float   float   int
struct item
{
	char brand[20];   //商品名字
	char id[20];      //商品编号
	float inprice;    //进价
	float outprice;   //售价
	int storage;          //数量
};
//购物车类型
struct item_node
{
	struct item wanted;
	int amount;
	struct item_node* next;
};
struct item goods[NUM];
struct item_node* cart;
//建立库存信息
void establish()
{
	FILE* fp;		//文件指针
	printf("\t请依次输入货物信息\n");
	printf("----------------------------------------------");
	//初始化商品存入goods数组
	for (int i = 0; i < NUM; i++)
	{
		printf("\n请输入第%d件商品的信息\n", i + 1);
		printf("商品名字：");
		fflush(stdin);	//清空输入缓冲区
		scanf("%s", goods[i].brand);
		printf("商品编号：");
		fflush(stdin);	//清空输入缓冲区
		scanf("%s", goods[i].id);
		printf("进价：");
		fflush(stdin);	//清空输入缓冲区
		scanf("%f", &goods[i].inprice);
		printf("售价：");
		fflush(stdin);	//清空输入缓冲区
		scanf("%f", &goods[i].outprice);
		printf("数量：");
		fflush(stdin);	//清空输入缓冲区
		scanf("%d", &goods[i].storage);
	}
	//判断文件是否可以创建
	if ((fp = fopen("goods", "w")) == NULL)
	{
		printf("文件创建失败！\n");
		return;
	}
	//将商品信息写入文件
	fwrite(goods, sizeof(struct item), NUM, fp);
	//关闭文件
	fclose(fp);
}
//显示信息
void dis_all()
{
	//清空前面内容
	system("cls");
	FILE* fp;//文件指针
	fp = fopen("goods", "r");
	for (int i = 0; (fread(goods + i, sizeof(struct item), 1, fp)) != 0; i++)
	{
		printf("------------------------------\n");
		printf("名字 编号  售价  数量\n");
		printf("%s  %s  %.2f %4d\n", goods[i].brand, goods[i].id, goods[i].outprice, goods[i].storage);
	}
	fclose(fp);
}

//购物车添加商品
//购物车添加商品
static void add()
{
	FILE* fp;//文件指针
	char str[20];
	int n;
	char choice, choice2;
	struct item_node* p, * p1;
	int i;

	do
	{
		printf("请输入要添加的商品编号或者名称：");
		// 更好的清空输入缓冲区方法
		int c;
		while ((c = getchar()) != '\n' && c != EOF); // 清空输入缓冲区

		fgets(str, sizeof(str), stdin);
		// 移除fgets读取的换行符
		str[strcspn(str, "\n")] = 0;

		if ((fp = fopen("goods", "r")) == NULL)
		{
			printf("文件打开失败！\n");
			continue;
		}

		int found = 0; // 标记是否找到商品
		for (i = 0; fread(goods + i, sizeof(struct item), 1, fp) != 0; i++)
		{
			if (strcmp(goods[i].id, str) == 0 || strcmp(goods[i].brand, str) == 0)
			{
				found = 1;
				printf("找到商品：%s  编号：%s  售价：%.2f  数量：%d\n",
					goods[i].brand, goods[i].id, goods[i].outprice, goods[i].storage);

				// 添加到购物车逻辑
				printf("请输入要添加的数量：");
				scanf("%d", &n);

				// 清空输入缓冲区
				while ((c = getchar()) != '\n' && c != EOF);

				if (n > goods[i].storage)
				{
					printf("库存不足，当前库存为：%d\n", goods[i].storage);
					break;
				}

				printf("是否购买？(Y/N)\n");
				choice = getchar();
				// 清空输入缓冲区
				while ((c = getchar()) != '\n' && c != EOF);

				if (choice == 'Y' || choice == 'y')
				{
					// 开辟内存
					p1 = (struct item_node*)malloc(sizeof(struct item_node));
					if (p1 == NULL)
					{
						printf("内存分配失败！\n");
						exit(1);
					}
					p1->amount = n;
					p1->wanted = goods[i];
					p1->next = NULL;
					p = cart;
					if (cart == NULL)
					{
						cart = p1;
					}
					else
					{
						while (p->next != NULL)
						{
							p = p->next;
						}
						p1->next = p->next;
						p->next = p1;
					}
					printf("已添加%d件%s到购物车\n", n, goods[i].brand);
				}
				break;
			}
		}

		if (!found)
		{
			printf("未找到该商品，请重新输入\n");
		}

		fclose(fp);

		printf("是否继续购物？(Y/N)\n");
		choice2 = getchar();
		// 清空输入缓冲区
		while ((c = getchar()) != '\n' && c != EOF);

	} while (choice2 == 'Y' || choice2 == 'y');
}
int shop_menu()
{
	int select;
	printf("请选择数字进行操作；\n");
	printf("1.显示当前购物列表\n");
	printf("2.添加商品\n");
	printf("3.退出\n");
	printf("请选择对应数字1-3\n");

	while (1)
	{
		scanf("%d", &select);			//从键盘获取数据存入变量
		if (select < 1 || select >3)
		{
			printf("输入错误，请重新输入1-5之间的数字\n");
		}
		else
		{
			break;
		}

	}
	return select;
}
//显示购物列表
void display()
{
	struct item_node* p = cart;
	if (p == NULL)
	{
		printf("购物车为空！\n");
		return;
	}
	while(p != NULL)
	{
		printf("商品：%s  编号：%s  售价：%.2f  数量：%d\n", p->wanted.brand, p->wanted.id, p->wanted.outprice, p->amount);
		p = p->next;//指向下一个节点
	}
}
//购物车
void shop_cart()
{
	//清空前面内容
	system("cls");
	while (1)
	{
		switch (shop_menu())
		{
			case 1:
			{
				printf("显示当前购物列表\n");
				display();
				break;
			}
			case 2:
			{
				printf("添加商品\n");
				add();
				break;
			}
			case 3:
			{
				printf("退出购物车\n");
				return;
				break;
			}
		}
	}
}
//结算
void calc()
{
	float total = 0, pay;
	struct item_node* p;
	FILE* fp;
	printf("以下是购物清单\n");
	display();
	if((fp=fopen("goods","r")) == NULL)
	{
		printf("文件打开失败！\n");
		return;
	
	}
	for (int i = 0; fread(goods + i, sizeof(struct item), 1, fp) != 0; i++);
	fclose(fp);
	p = cart;
	while (p != NULL)
	{
		total += p->wanted.outprice * p->amount;
		//更新库存
		for (int i = 0; i < NUM; i++)
		{
			if (strcmp(goods[i].id, p->wanted.id) == 0)
			{
				goods[i].storage -= p->amount;
				break;
			}
		}
		p = p->next;
	}
	printf("总计金额为：%.2f\n", total);
	printf("请输入支付金额：");
	scanf("%f", &pay);
	if (pay < total)
	{
		printf("支付金额不足，交易失败！\n");
	}
	else
	{
		printf("支付成功！找零：%.2f\n", pay - total);
		//更新库存信息到文件
		if ((fp = fopen("goods", "w")) == NULL)
		{
			printf("文件打开失败！\n");
			return;
		}
		fwrite(goods, sizeof(struct item), NUM, fp);
		fclose(fp);
		//清空购物车
		struct item_node* temp;
		p = cart;
		while (p != NULL)
		{
			temp = p;
			p = p->next;
			free(temp);
		}
		cart = NULL;
	}
}
int main()
{
	
	printf("**************************************************\n");
	printf("\t欢迎进入超市管理系统\n");
	printf("**************************************************\n");
	
	while (1)
	{
		switch (menu())
		{
		case 1:
		{
			//printf("建立库存信息\n");
			establish();
			break;
		}
		case 2:
		{
			//printf("显示库存信息\n");
			dis_all();
			break;
		}
		case 3:
		{
			/*printf("购物车\n");*/
			shop_cart();
			break;
		}
		case 4:
		{
			//printf("结算\n");
			calc();
			break;
		}
		case 5:
		{
			printf("退出系统\n");
			/*break;*/
			return -1;
		}
		}
	}
	return 0;
}
