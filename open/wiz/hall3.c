// Room: /open/wiz/hall3.c 
inherit ROOM;
 
void create ()
{
  set ("short", "�ڸ���");
  set ("long", @LONG
���λ�ڸ��Ա�пն࿴��board, �� post ��������⡣
ɶ���ڸ�ʲô����Ȼ�� Post Wiz �������������˸�����
�õġ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"hall1.c",
]));
  set("no_fight", 1);
  set("no_magic", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/obj/tel" : 1,
]));

  setup();
call_other("/obj/board/wiztt_b.c","???");
}
