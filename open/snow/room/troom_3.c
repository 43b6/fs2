// Room: /u/e/eiei/work/troom_3.c
inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
    �߹������滨��ݵ�С·֮�󣬵�����һ����·��
    �򶫱�����ȥ�������ԵĿ��Է���������һ�������ı�
    ��������ľ��Ҫ�ߴ󡣶����������Ļ���Ȼ���Ե����
    �ߵ�ɽ���������˴�֮���ɽ·������У�һ����ƽ��
    ���ֻ�ǵ��������ͷ羰���ѡ�
    ·������һ�Ų���(sign)
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "    ���棺ɽ�г������޳�û���������벻Ҫ������
",
]));

  set("outdoors", "/u/e/eiei/work");

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"troom_2.c",
  "eastup" : __DIR__"troom_3a.c",
]));

  setup();
}
