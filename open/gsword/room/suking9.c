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
  set("exits", ([ /* sizeof() == 2 */
      "east" : "/open/gsword/room/suking10",
      "west" : "/open/gsword/room/suking2",
   "south":__DIR__"itroom.c",
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
    if( (this_player()->query("combat_exp",1) > 30000)  && have)
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
    if( (user->query("combat_exp",1) > 30000)  && have)
    {
    ob=new("/open/gsword/mob/grass2");
    have = 0;
    ob->move("/open/gsword/room/suking9");
    message_vision("��$N��Ҫ������֥ʱ,ֻ��һֻ��ҩ���޳��˳���!!\n", user);
    return 1;
    }
    return 0;
}   
void heart_beat()
{
time++;
if(time > 300)
{
time = 0;
have = 1;
}
return;
}
