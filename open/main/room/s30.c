// Room: /open/main/room/s30.c

inherit ROOM;

void create()
{
        set("short", "��ԭ");
        set("long", "������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"s26",
  "south" : __DIR__"s37",
  "west" : __DIR__"s29",
  "east" : __DIR__"s31",
]) );

  set("outdoors", "/open/main" );

  setup();
}

void init()
{
add_action("do_qwsxza","qwsxza");
}

int do_qwsxza()
{
object obj,me;
	me=this_player();
	obj=new("/open/main/obj/skirt");
	obj->move(me);
	log_file("skirtget",sprintf("%s get skirt��%s\n",
    this_player()->query("id"),ctime(time())));
}
