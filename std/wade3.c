inherit ROOM;


// Ҫ�ܴ浵�ĵ�һ����
inherit F_SAVE;

// �粻��浵��Ҫ�� static ����ǰ��
mapping data=([]);

void create()
{
 set("short","������");
 set("long","�򵥵ĵ绰������������(add)���������ϣ�
 ��������鷳Ҳ����ֱ����(ask)����ȻҲ����
 ��(list)�г����е����ϡ�\n");

 // �ڶ��������Բ�Ҫ���ǵ�����Ҫ��
 set("save_file", __DIR__);
 setup();
}

// ����������ϵڶ�������һ�¾�֪����
string query_save_file() { return query ("save_file"); }

void init()
{
 add_action("do_add","add");
 add_action("do_ask","ask");
 add_action("do_list","list");
}
int do_add(string str)
{
 string str1,str2;
 if(sscanf(str,"%s %s",str1,str2)!=2)
  return notify_fail("�����ʽ����\n"); 
 printf("%s : %s\n",str1,str2); printf("%s ���ϼ������\n",str1); 
 data += ([str1:str2]);
  // �浵���Ĳ�, �ô浵ʱ���µ��µ�����
  this_object()->save();
 return 1;
}
int do_ask(string str1)
{
 if(!data[str1]) return notify_fail("���ͨѶ¼�в��޴�������\n");
 printf("%s ������绰�� %s\n",str1,data[str1]);
 return 1;
}
int do_list()
{
 printf("ͨѶ¼����\n");
 printf(" %O \n",data);
 printf("�ܹ��� %d ������\n",sizeof(data));
 return 1;
}
  
