// Room: /u/s/smore/room/suking/suking9.c

inherit ROOM;
int have = 1;
int time = 0;
void create ()
{
  set ("short", "���л�԰");
  set ("long", @LONG
���������д󽫾��İ��Ļ�԰,�����˸����ռ������滨���,
ֻ������ܰ��,�Ż�����,��ȴ����ôһ��������,����������
�Ļ�԰��,���������ɷ���,�ƺ���Щ����.
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 1 */
   "north":__DIR__"itroom3",
    "west":__DIR__"itroom2",
]));
set("objects",([
"/open/gblade/obj/smallstone.c":1,
]));
  setup();
  set_heart_beat(1);
}
void init()
{
    add_action("search_here", "search");
    add_action("pull_it","pull");
} 
int search_here(string arg)
{
    if( (this_player()->query("combat_exp",1) > 100000)  && have)
      write("���Ұ��ҵ�,���ڷ������������Ŷݼ�������һ����֥.\n"+
            "��������Ű���(pull it).\n");
    else
      write("Ҳ�����㾭�鲻��,��ʲôҲû����...\n");
    return 1;
}
int pull_it(string arg)
{
    object user,ob;
    user = this_player();
    if( (user->query("combat_exp",1) > 100000)  && have)
    {
    have = 0;
    ob=new("/open/gsword/mob/grass");
   ob->move("/open/gsword/room/itroom4");
    message_vision("��$N��Ҫ������֥ʱ,ֻ��һֻ��ҩа�޳��˳���!!\n", user);
    return 1;
    }
    return 0;
}   
void heart_beat()
{
time++;
if(time > 1200)
{
time = 0;
have = 1;
}
return;
}
