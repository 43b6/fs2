inherit ROOM;

void create ()
{
  set ("short", "LPC ˵��");
  set("long", @LONG
���˵���ļ����� Descartes of Borg 23 april 1993 ԭ������ George Reese
����ȡ��ԭ�ĵĿ���������ط��� ftp ȡ��:
    nctuccca.edu.tw:/packages/networking/MUD/LPmud/MudOS/Docs/BasicLPC.tar.gz
������ email ��ԭ�������� borg@hebron.connected.com

intr	����
chap1	���� LPC ��ʽ
chap2	LPC ��������̬
chap3	����
chap4	�̳еĻ�������
chap5	�����Ĵ���
chap6	���̵Ŀ���
chap7	Object ���������̬

��ѡ��һ������ǰ��.
LONG);

  set("exits", ([
	"back"		:  "/u/w/wade/workroom",
	"intr"		:  __DIR__"intr",
	"chp1"		:  __DIR__"chap1",
	"chp2"		:  __DIR__"chap2",
	"chp3"		:  __DIR__"chap3",
	"chp4"		:  __DIR__"chap4",
	"chp5"		:  __DIR__"chap5",
	"chp6"		:  __DIR__"chap6",
	"chp7"		:  __DIR__"chap7",
  ]) );
  setup();
}
