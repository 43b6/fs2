// made by funkcat, copy and re-edit by ccat
inherit BANK;
void create ()
{
  set ("short", "ƽ��Ǯׯ");
  set ("long", @LONG
������ƽ��Ǯׯ,��Ȼ�ش�ƫԶ,�������ڱ𴦵Ĵ��,����
���ǳ��ϵ�,����Կ�������Ĺ���(board),��������ô����.
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
    balance: �鿴�����еĴ��    convert: ��Ǯ��
    withdraw: ���               deposit: ���    
    cdonate: ��Ǯת������İ���֮��
 ",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"road3",
]));
  set("objects", ([
       "/open/ping/npc/officer-1" :1,
     ]) );
  set("light_up", 1);
  set("donate",1);

  setup();
}
