// Room: /open/gsword/room/su-
inherit ROOM;

void create()
{
  set ("short", "�Ӳ�·");
  set ("long", @LONG
�ɴ�������������������,������ͨ�����г�,�����������
�ͱڼе�,���ʶ���������,����ɭ�ּ���,��˵ʢ��ҩ��,Ȼ����
��а��,�������,���ҪС�Ĳ���.
LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 1 */
  "north" : "open/main/room/F5",
  "south" : __DIR__"froad0",
]));
  setup();
}
