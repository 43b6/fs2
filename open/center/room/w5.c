// Room: /u/l/lotus/girl/w5.c
inherit ROOM;

void create ()
{
  set ("short", "ɹ�³�");
  set ("long", @LONG
����֦Ҷ��ïʢ��С��, ����ɹ�¼���ɹ�˹����ǵ�����, ���
ƮѽƮ��.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"w6.c",
  "east" : __DIR__"w4",
]));
  set("outdoors", "/u/l");

  setup();
}
