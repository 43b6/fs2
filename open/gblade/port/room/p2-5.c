// made by funkcat, copy and re-edit by ccat
inherit BANK;
void create ()
{
	set("short","����Ǯׯ");
  set ("long", @LONG
�����Ƿ���Ǯׯ , ��ߵĴ��ſ���һ����ȫ����һ��
���� , ����Կ�������Ĺ���(board),��������ô����.

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"p2-1.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
    balance: �鿴�����еĴ��    convert: ��Ǯ��
    withdraw: ���               deposit: ���    
 ",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/officer" : 1,
]));

  setup();
}
