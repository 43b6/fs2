// made by funkcat, copy and re-edit by ccat
inherit BANK;
void create ()
{
  set ("short", "�ʷ�");
  set ("long", @LONG

������ħ���������Ǯ���Ǯׯ��Ҳͬ�������ڵ�����,��
��һ���԰�ȫ���������.һ�Ÿ�ʾ(board)����������ķ�
����Ŀ.

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
    balance: �鿴�����еĴ��    convert: ��Ǯ��
    withdraw: ���               deposit: ���    
 ",
]));
  set("exits", ([ /* sizeof() == 1 */
"north":__DIR__"r7.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
     "/u/m/moner/npc/officer.c" :1,
]));

  setup();
}
