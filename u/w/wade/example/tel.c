inherit ROOM;


// Ҫ�ܴ浵�ĵ�һ����
inherit F_SAVE;

// �粻��浵��Ҫ�� static ����ǰ��
mapping data=([
  "wade":       ({ "(04)6397291", "0920-351711", }),
]);

void create()
{
 seteuid(ROOT_UID);
 set("short","�绰��");
 set("long","�򵥵ĵ绰������������(add)���������ϣ�
 ��������鷳Ҳ����ֱ����(ask)����ȻҲ����
 ��(list)�г����е�����, �� (del) ɾ����Ҫ�ļ�¼��\n");

   set("exits", ([ /* sizeof() == 1 */
        "back" : "/open/wiz/hall1",
   ]) );

 setup();
}

// ������
string query_save_file() {
  return DATA_DIR+"telphone/tel";
}

void init()
{
 add_action("do_add","add");
 add_action("do_ask","ask");
 add_action("do_list","list");
 add_action("do_del","del");
  // �ڶ���
  if (!restore()) save();
}

int do_del (string str)
{
  string who, tel;

  if (!str) return notify_fail ("del who [tel]\n");
  if (sscanf (str, "%s %s", who, tel) != 2) {
    who = str;
    map_delete (data, who);
  }
  else {
    if (arrayp (data[who]))
      data[who] -= ({ tel });
  }
  this_object()->save();
  return 1;
}

int do_add(string str)
{
 string who, tel;

 if(sscanf(str,"%s %s",who, tel)!=2)
  return notify_fail("�����ʽ add who tel\n"); 
 printf("���� %s : %s ���\n", who, tel);
  if (!arrayp (data[who])) {
    map_delete (data, who);
    data[who] = ({ tel });
  }
  else
   data[who] += ({ tel });

  // �浵���Ĳ�, �ô浵ʱ���µ��µ�����
  this_object()->save();
 return 1;
}
int do_ask(string str1)
{
 if(!data[str1]) return notify_fail("���ͨѶ¼�в��޴�������\n");
 printf("%s ������绰�ǣ�\n%O\n",str1,data[str1]);
 return 1;
}

int do_list()
{
 printf("ͨѶ¼���ϣ�\n");
 printf(" %O \n",data);
 printf("�ܹ��� %d ������\n",sizeof(data));
 return 1;
}
