inherit ROOM;

void create ()
{
  set ("short", "��֪���Ŀռ�");
  set ("long", @LONG
����һ�����صĵط������ܲ��ϵ�����Ӱ������
���ܸо���������һ��δ֪�Ŀռ䣬���ұ������У�
����Ѷ���뿪����ط�������õ�ѡ�����������
ʹ���Ṧ�뿪��
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"s3",
  "south" : __DIR__"s1",
  "north" : __DIR__"s2.c",
  "northwest" : __DIR__"s3",
]));

  setup();
}
void init()
{
add_action("do_jump","jump");
}
int do_jump()
{
if(this_player()->query_skill("dodge",1)<10) return 0;
message_vision("$Nʩչ�����Ṧһ�ݶ��ϣ��뿪�����ؿ��С�\n",this_player());
this_player()->move("/u/c/cyw/room/p12.c");
return 1;
}