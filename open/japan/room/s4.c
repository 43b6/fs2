inherit ROOM;

void create ()
{
  set ("short", "���س���");
  set ("long", @LONG
������ȻһƬ�ڰ�������ϸ�۲��ƺ����Ըе����ھ�����
�ﶫ����ʯ�ڴ�����΢�Ĺ��֣���������ʯ�ھ��г��ڡ�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"s1.c",
  "down" : __DIR__"s3",
]));

  setup();
}
void init()
{
add_action("do_search","search");
add_action("do_pass","pass");
}
int do_search(string str)
{
if(str!="east") return 0;
this_player()->set_temp("search",1);
message_vision("$N��������ʯ���ϵ���ʯ,������СС�Ķ���\n",this_player());
return 1;
}
int do_pass(string str)
{
if(str!="hole") return 0;
if(this_player()->query_temp("search")==0) return 0;
message_vision("$N���������˽�ȥ\n",this_player());
this_player()->set_temp("search",0);
this_player()->move("/open/japan/room/port.c");
return 1;
}