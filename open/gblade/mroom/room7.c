// Room: /u/m/moner/room/room7.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

һ�߽�������ӳ�������ı���һ������ͼ(picture)�������f��ľ��ɢ������
����f�㣬����ˮ���ƽ����ڵ�׺�������һ�㣬���Ϸ�����һ����徣��������
�����������ţ���ȽȽ����������裬���㲻֪����δ������������ɫ������ɢ
��������ɫ�ʣ��������ϵĵ�Ҳ�໥��ӳ�š�
  �����������ϰ�գ����е�������ɢ���������ɫ��....��

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room1.c",
]));
  set("item_desc", ([ /* sizeof() == 2 */
"word" : "��������ħ��������\n",
  "picture" : "һ������ͼ, ͼ��֮���а˷���ħ������, ͼ����һ��С��(word)
",
]));
  set("light_up", 1);

  setup();
}
/*
void init()
{
        add_action("do_pray","pray");
  }
int do_pray(string arg )
{
        object ob;
        ob=this_player();
          if(ob->query("sen") > 20)
        {
message_vision("$N��������,������ͼ���˼�����ͷ....\n",this_player());
 if(random(10)>8)
        {
call_out("do_act1",3,ob);
        return 1;
        }
        else
message_vision("$N���ⲻ���Ͽ�, �޷���Ӧ���˵���˼..\n", this_player()
);
        return 1;
}
}
int do_act1(object ob)
   {
 message_vision("$N�·𿴵����˵���������һ����â......
 
$N����һ��, ��������...��\n\n",ob);
ob->add("bellicosity",1);
ob->add("sen",-40);
     return 1;
}
*/
