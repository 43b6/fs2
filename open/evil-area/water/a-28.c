inherit BANK;

void create ()
{
  set ("short", "Ǯׯ");
  set ("long", @LONG
����һ����ľ�������ɵ�С���ӣ����߽����棬���Կ���һ����
��������ľ��������������У���Ҳ���Կ���һЩ����������������
��Ǯ��
    �ұ�ǽ������һ��˵����(sign)��
LONG);

set("item_desc",([
  "sign" : "������Ǯׯ��Ŀǰ�����ṩ�ķ����У�

balance         ��Ǯׯ�ж��ٴ��
withdraw        ��ȡ����Ǯׯ��Ǯ
deposit         ��Ǯ���Ǯׯ
convert         �һ�Ǯ�ҡ�
lend            ��Ǯׯ��Ǯ
relend          ��Ǯ��Ǯׯ


balance
withdraw <����> <����>
deposit <����> <����> || deposit all
convert <����> <����> to <����>

lend <����> coin
relend <����> coin


����:       convert 10 silver to coin

Ǯ��������  1 gold == 100 silver == 10000 coin

",
]));
	set("evil_area",1);
	set("no_transmit",1);
	set("exits", ([ /* sizeof() == 1 */
"east" : __DIR__"a-04",
]));
	set("light_up", 1);
setup();
}
