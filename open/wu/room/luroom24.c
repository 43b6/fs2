// Room: /open/wu/room/luroom24.c
// ��ɽ����ڵ�
inherit ROOM;
void create ()
{
  set ("short", "�ߵ�");
  set ("long", @LONG
��������ɽ����ڵ��ߵ�,�ߵ��ϵĵƽ��ߵ��յ�ʮ������
�����Ļ���ͨ����ɽ�ɵ���Ժ���ϱ�����ɽ�ɵĽ��ؼ���ɽ
�ɵĴ�����
LONG);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"luroom25",
  "south" : __DIR__"luroom20",
]));
  set("light_up", 1);
  setup();
}
