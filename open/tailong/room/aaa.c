// Room: /u/o/ookami/teikei.c 
inherit ROOM;
 
void create ()
{
  set ("short", "�۹������ţ����飮�����·ֲ�");
  set ("long", @LONG
�����ǵ۹������Ż���������·ֲ�,����ǰ����һ��ʯ��(stone)
,����Կ�������дЩʲô,վ������ǰ���Ǹ��˾��ǵ۹������Ż����
�ӳ�,����һ��
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "stone" : "
��������������87��8��9��
 ��xboy�๤
ookami�����޽�
MADE IN TAIWAN
���Ұ��ù���
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"aa41",
]));
  set("no_fight", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/tailong/npc/ookami1.c" : 1,
]));
  set("no_magic", 1);
  set("valid_startroom", 2);

  setup();
  replace_program(ROOM);
}
