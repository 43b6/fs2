// Room: /open/main/room/s16.c
#include </open/open.h>
inherit ROOM;
string do_bush();
void create()
{
	set("short", "��ԭ");
	set("long", "������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ��������Χ����һ�Ų�С�����ԣ�����Ӧ���в��ٶ����ء�
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s20",
  "north" : __DIR__"r15",
  "west" : __DIR__"s15",
  "east" : __DIR__"s17",
]) );
  
  set("item_desc", ([ /* sizeof() == 1 */
  "bush" : "���ҵ�ֲ��������һ��, ��������ƽ���ġ�\n",
  ]));
  set("search_desc",([
  "bush" : (: do_bush :),
  ]));
  set("outdoors", "/open/main" );

  setup();
}

string do_bush()
{
	object me=this_player();
	if(me->query_temp("thief") == 8)
	{
	  write("�����Ա����ڰ��ڵ�......\n\n��..��ô��һ����..����˽�ȥ....\n"+
	  "..................\n..................\n..................\n");
	  tell_room(environment(me),"��~~~~~~~~��һ���ҽ�, "+me->query("name")+"�Ѳ�����Ӱ��\n",me);
	  me->move(CAPITAL_ROOM"q0");
	  return("�˵�һ��..������˵��ϡ�\n");
	}
	else
	  return("�������ϰ��죬���ǿ��������κ�����֮����\n");
}	  
	
