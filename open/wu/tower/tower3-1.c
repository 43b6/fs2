// Room: /u/p/pokai/room/wu/tower3-1.c
inherit ROOM;

void create()
{
  set ("short","������ɱ����¥--");
  set ("long", @LONG
��̤����һ��¥��������߾ͱ�һ������ɫ��ռ������һ�������ǽ�ڣ��Ѿ�
�����Ǹոյ����ְ��죬����������һ�����˲������������������ϰ߲���Ѫӡ��
ʹ�ո��ǹ���ɱ�������������������ϡ���ע�⵽�ϱߵ�ǽ����һЩСС�Ĺκۣ�
�ƺ���һЩС��(words)��
LONG);

  set("light_up", 1);
  set("item_desc", ([ /* sizeof() == 1 */
  "words" : @LONG

    �� Ѫ��ս�� ���Ʒ� �ҳ�������ڴˣ���������̾�޵������¡�����
        
LONG,
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"tower3-2",
  "down" : __DIR__"tower2-3",
]));
  setup();
}
