inherit ROOM;
int have = 1;
int time = 0;
void create ()
{
  set ("short", "��԰");
  set ("long", @LONG
�����������ŵĻ�԰�������˸����ռ������滨��ݣ�ֻ������ܰ��
���Ż����أ���ȴ����ôһ�������죬����������Ļ�԰���������
�ɷ��裬�ƺ���Щ���ء�

LONG);

  set("light_up", 1);
  set("outdoors", 1);

        set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r4.c",
  "north" : __DIR__"r2.c",
]));
        set("can_search",1);
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
    if( (this_player()->query("combat_exp",1) > 10000)  && have)
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
    if( (user->query("combat_exp",1) > 10000)  && have)
    {
    have = 0;
    ob=new("/open/doctor/npc/grass");
    ob->move("/open/doctor/room/r3");
    message_vision("��$N��Ҫ������֥ʱ,ֻ��һֻ��ҩа�޳��˳���!!\n", user);
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


