#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "�ɽ���ǰɽ");
	set("long", "�����ǰ���Ǵ�ֱ���ͱڣ��⻬����һ����Ҳ�޷��������Ÿ���ά�����ͱ�(cliff)��
��࣬��ɫ������ɫ��������ʹ���뿴�����Щ�������Ǹ߶�ʵ��̫��������ôŬ
����Ҳ�޷��Ƹ���ϸ��        

");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"road1",
  "east" : __DIR__"rroad2",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}
