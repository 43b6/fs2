// Room: /open/main/room/s38.c

inherit ROOM;

void create()
{
	set("short","��·");
	set("long",
"����һ����ʯ���̳ɵĵ�· , �ǳ�͢���������� , ��·��
�ϱ����� , ������������վ�ʹ�½Ψһ�ĸۿ� -- ���ָ� . ����
�������ں�������½��ͨ�� , ���ָ����Ѵ�ԭ�����ص�С���һ
Ծ����Ϊ������ҵ���� , �Ϸ����Ƿ��ָ۵ı��� .

");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"s31",
  "west" : __DIR__"s37",
  "east" : __DIR__"s39",
	"south" : "/open/port/room/r1-1",
]) );

  set("outdoors", "/open/main" );

  setup();
}
