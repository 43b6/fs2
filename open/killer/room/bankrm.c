// made by funkcat, copy and re-edit by WATARU
inherit BANK;
void create ()
{
set("short","ɱ��Ǯׯ");
  set ("long", @LONG
������ɱ����̳��Ǯׯ,��ߵĴ�����ȫ�������е�һ��,������ɱ�ֵ�׬Ǯ��ʽ��ͬ
����԰��ĵĽ�Ǯ�������� . ���Ǯׯ���ϰ��Ǵ������Զɣ�����Ҷ��ɱ�Ŀ�����ʦ��
����в����˴��ţ�����Ҳ��ɱ��֧���������ĳ�𴦡�
����û���ܹ�֤ʵ����Ϊ��ɱ����û��Ը����ϡ�
���Կ�������Ĺ���(board),��������ô����.

LONG);

  set("exits", ([ /* sizeof() == 1 */
"east" : __DIR__"ru1.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
    balance: �鿴�����еĴ��    convert: ��Ǯ��
    withdraw: ���               deposit: ���    
 ",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
      "/open/killer/npc/wantman.c":1,
]));

  setup();
}
