inherit ITEM;
// 要能存档的第一步：
inherit F_SAVE;

// 如不想存档，要加 static 在最前面
mapping data=([
  "wade":	({ "(04)6397291", "0920-351711", }),
]);

void create()
{
  seteuid (geteuid(previous_object()));
  set_name ("记事簿", ({ "tel", "note", }) );
  set("long",@LONG
  简单的记事簿，可以利用(add)来增加资料，
  如果你闲麻烦也可以直接用(ask)，当然也可以
  用(list)列出所有的资料, 或 (del) 删除不要的记录。
LONG
);
  set ("unit", "个");
  set ("save_file", "/data/telphone/wiz");
  set ("no_get",1);

   set("exits", ([ /* sizeof() == 1 */
  	"down" : "/u/w/wade/workroom",
   ]) );

 setup();
}

// 第三步
string query_save_file() {
  return query ("save_file");
}

void init()
{
  add_action("do_add","add");
  add_action("do_ask","ask");
  add_action("do_list","list");
  add_action("do_del","del");
  restore();
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
  return notify_fail("输入格式 add who tel\n"); 
 printf("新增 %s : %s 完毕\n", who, tel);
  if (!arrayp (data[who])) {
    map_delete (data, who);
    data[who] = ({ tel });
  }
  else
   data[who] += ({ tel });

  // 存档第四步, 该存档时就下底下的命令
  this_object()->save();
 return 1;
}
int do_ask(string str1)
{
 if(!data[str1]) return notify_fail("你的通讯录中并无此人资料\n");
 printf("%s 的联络电话是：\n%O\n",str1,data[str1]);
 return 1;
}

int do_list()
{
 printf("通讯录资料：\n");
 printf(" %O \n",data);
 printf("总共有 %d 笔资料\n",sizeof(data));
 return 1;
}
