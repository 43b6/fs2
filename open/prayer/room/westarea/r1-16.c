// made by funkcat, copy and re-edit by rence
//open/prayer/room/westarea/r1-16.c 
inherit BANK;
void create ()
{
        set("short","�ּ�Ǯׯ");
  set ("long", @LONG
	���Ǯׯ���ϰ�����ԭǨ�ӵ��˳�Ա��ı���, ���������
	�ز��ܶ�, �������ö�Ⱥܸ�. ����Կ�������Ĺ���
	 (board), �˽�һ��������Щ��ô����.

LONG);

  set("exits", ([ /* sizeof() == 1 */
        "south" : __DIR__"road20",
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
