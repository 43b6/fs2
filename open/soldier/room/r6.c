
inherit BANK;
void create ()
{
set("short","�������Ŵ�");
  set ("long", "
    ���Ƿ��Ҿ��ǳ�ȥ��ս����սʤƷ��Ҫ�ķŵõط���
Ҳ��Ӷ���Ǵ�Ǯ�ĵط�����Ȼ������һ����������������
��Ҫ�Ҵ���������⣬���˵�Ǯ�������õģ�Ҫ��ҲҪ��
�Եط�������Կ�������Ĺ���(board),��������ô����.
        <<͵���߱�ץ����xxxxx�����ƽ�>>

");

  set("exits", ([ /* sizeof() == 1 */
"southeast" : __DIR__"r11.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
    balance: �鿴�����еĴ��    convert: ��Ǯ��
    withdraw: ���               deposit: ���
         <<͵���߱�ץ����xxxxx�����ƽ�>>
 ",
]));
  set("light_up", 1);
  setup();
} 
