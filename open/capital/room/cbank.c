// made by funkcat, copy and re-edit by ccat
inherit BANK;
void create ()
{
  set ("short", "���Ǹɼ�Ǯׯ");
  set ("long", @LONG
�����������⣬ԭ����Ǯׯ�Ĵ��ž����ûƽ����ġ����������ͨ
�����ү�ĸ��ɵй��������Ǹ�ͨ��Ĳ�ҵ֮һ���Ǹ�ͨ��������ҵ��
�ʽ���Դ������ȫ��Ǯׯ��Э���ڣ�������Ĵ������ڸ�Ǯׯ֮�以
����ͨ��

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"h09.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
    balance: �鿴�����еĴ��    convert: ��Ǯ��
    withdraw: ���               deposit: ���    
 ",
]));
  set("light_up", 1);

  setup();
}
