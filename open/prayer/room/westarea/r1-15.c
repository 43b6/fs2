// made by funkcat, copy and re-edit by rence
//open/prayer/room/westarea/r1-15.c 
inherit BANK;
void create ()
{
        set("short","�¼�Ǯׯ");
  set ("long", @LONG
	�������������ģ�Ӵ��Ǯׯ, ���������Ǯׯ�ϰ嶼������
	, ���Բ�������һ�Ҵ�ſ�, ����һ����. Ǯׯ���ϰ�����ԭ
	Ǩ�ӵ��˵ĳ�Ա��, �������û�����, ����Կ�������Ĺ���
	(board),�˽�һ������ô����.

LONG);

  set("exits", ([ /* sizeof() == 1 */
        "south" : __DIR__"road30",
]));
  set("item_desc", ([ /* sizeof() == 1 */
    "board" : "
    balance: �鿴�����еĴ��    convert: ��Ǯ��
    withdraw: ���               deposit: ���
   ",
]));
set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
]));

  setup();
}
