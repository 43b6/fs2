inherit ROOM;
void create()
{
  set ("short", "��Ʒ�һ���");
  set ("long", @LONG

�������ר�Ŷһ���Ʒ�ĵط���ֻҪ��õ�����а
����ͷ­����һ���ĳ̶ȣ�����������Ŷһ�����
Ҫ�Ľ�Ʒร�

 �����ߵ�ǽ�ϣ�������һ����Ƥֽ(paper)����

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/m-eq-man": 1,
]));

  set("exits", ([ /* sizeof() == 1 */
"west":__DIR__"r4",
]));
  set("no_fight",1);
  set("no_magic",1);
  set("no_kill",1);
  set("no_smash",1);
  set("no_dest",1);
  set("item_desc", ([ /* sizeof() == 1 */
  "paper" : @LONG
����֪�������ж��ٿ�ѩ�Ե���ͷ­���������"ask man about head"��
����һ���Ʒ������"want xxxxx"��
����֪���ܶһ���Щ��Ʒ���"list"��
LONG,
]));
  setup();
}
