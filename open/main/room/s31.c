// Room: /open/main/room/s31.c

inherit ROOM;

void create()
{
	set("short","��·");
	set("long",
"����һ����ʯ���̳ɵĵ�· , �ƺ����̺ò����Ƶ� , ��·��
�ϱ����� , ������������վ�ʹ�½Ψһ�ĸۿ� -- ���ָ� . �㿴��
���ֲ������ÿͺ��̶�������·�� ,һƬ�������� .

");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"s27",
	"south" : __DIR__"s38",
  "west" : __DIR__"s30",
  "east" : __DIR__"s32",
]) );

  set("outdoors", "/open/main" );

  setup();
}
