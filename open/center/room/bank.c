// Room: /open/center/room/bank.c

inherit BANK;

void create ()
{
  set ("short", "Ǯׯ");
  set ("long", @LONG
����һ��ʼ���ԼǮׯ............�ķ��У��ԴӸ�������
ǿ��Σ���˼������Ѿ�û�˸����ƹ��ˣ�����������վ���
�ǲ�������С�ӣ����һ�굽ͷ��ʮ��Сʱ���ݵľ�Ӫ��
    �ұ�ǽ������һ��˵����(sign)��
LONG);

set("item_desc",([
  "sign" : "������Ǯׯ��Ŀǰ�����ṩ�ķ����У�

balance		��Ǯׯ�ж��ٴ��
withdraw	��ȡ����Ǯׯ��Ǯ
deposit		��Ǯ���Ǯׯ
convert    	�һ�Ǯ�ҡ�

balance
withdraw <����> <����>
deposit <����> <����> || deposit all
convert <����> <����> to <����>

����:       convert 10 silver to coin

Ǯ��������  1 gold == 100 silver == 10000 coin

",
]));

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"road4",
  "enter" : __DIR__"auroom",
]));

  set("objects", ([
      "/open/gsword/mob/officer" : 1,
     ]) );
  set("light_up", 1);

  setup();
}
