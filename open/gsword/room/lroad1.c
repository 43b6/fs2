#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "�ɽ���ǰɽ");
	set("long", "          
�����ǰ���Ǵ�ֱ���ͱڣ��⻬����һ����Ҳ�޷��������Ÿ���ά�����ͱ�(cliff)��
��࣬��ɫ������ɫ��������ʹ���뿴�����Щ�������Ǹ߶�ʵ��̫��������ôŬ
����Ҳ�޷��Ƹ���ϸ��        

");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"lroad2",
  "east" : __DIR__"road1",
]) );

  set("outdoors", "/open/gsword/room" );

  setup();
}
