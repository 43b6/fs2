// Room: /u/m/moner/room/room22.c
inherit ROOM;

int have = 1;
int time = 0;
void create ()
{
  set ("short", "��Ժ");
  set ("long", @LONG

������ħ�������Ի�ֲ�ݵĵط��������˶�Ϊϰ������֮�ˣ�������
����ϧ��֮�ˣ�����Ժ�����������ϣ��滨��ݺ��ӻ��Ӳ�������һ��
������ϸ���Ļ��Ƿֱ治�����ģ��ʵ�����Ĵ����ڻ��Լ䣬�۷�����
�����ۡ�
       ���΢΢�Ĵ����ţ�һֻ������С�ķɵ��������ˡ�
LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room21.c",
]));

  setup();
}
void init()
{
    add_action("search_here", "search");
   add_action("pull_straw", "pull");
}
int search_here(string arg)
{
    if( (this_player()->query("combat_exp",1) > 10000)  && have)
   write("������������, ���ֽ����˲ݴ���Щ���..\n"+
       "������ΰο��ǶѲ� (pull straw)...\n");
    else
      write("Ҳ�����㾭�鲻��,��ʲôҲû����...\n");
    return 1;
}
  int pull_straw(string arg)
{
    object user,ob;
    user = this_player();
    if( (user->query("combat_exp",1) > 10000)  && have)
    {
    have = 0;
     ob=new("/daemon/class/blademan/npc/butterlfy.c");
     ob->move(__DIR__"room22.c");
    message_vision("��$N��Ҫ����ݵ�ʱ, һֻ�ʵ����˳���!!\n", user);
    return 1;
    }
    return 0;
}
void heart_beat()
{
  time++;
  if( time > 300)
  {
    time = 0;
    have = 1;
   }
   return;
}
