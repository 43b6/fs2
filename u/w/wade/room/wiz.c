inherit ROOM;

void create ()
{
  set ("short", "����ʦ�ĵ�һ��");
  set("long", @LONG
	1. ˵��ǰͷ, ����ʦ����������Լ��������Ƿ��뱾 MUD �����,
	   ����ʦ����Ҫ����: һ�Ŵ��췢�����������׵���, �� help mud_idea

	2. ����ʦ��Ȼһ��Ҫ����ʦ�Ļ�������, ���� help wizcmds ��
	   �Ե���������Ϊ����, �� help file_oper Ҳ���Բ�. ��Ȼ, һ��
	   Ҫ��Ŀ¼�Ĺ���, ����ȥ���κθ� MS-DOS X.X �йص���.

	3. ���ļ�, ������, ȥ /doc �¶����Ƿǳ���Ҫ��, ���Ҫ�� cd /doc
	   �� ls �� more <����> ������,  ����, ���������еĵ��Ǻ���
	   Ҫ��, ������ goto <����>  �ټ��� more here  ������, �����
	   ���, ����ֱ�� more <���>, �� more girl. ��Ȼ, �� help Ҳ
	   �Ƿǳ���Ҫ��, ���� help help ȡ��˵��. ���������һ��.

	4. �༭����, �ȴӱ��Լ����ѿ�ʼѧϰ, ��Ȼ, Ҫ���� apprentice
	   ���ϲ����ʸ�����, �����ϱ༭���༭�Ļ��� help edit_file
	   �����Ҫ���Լ������ϵı༭���༭, �Ǿ�Ҫ�ᴫ��, ����
	   help ftp ��ѯ, ��������ֱ�Ӵ� PC �ϴ�, ��������������ʦ.
LONG);

  set("exits", ([
	"back"	: "/u/w/wade/workroom",
	"prog"	: __DIR__"wiz_prog",
	"rule"	: __DIR__"wiz_rules",
	"level"	: __DIR__"wiz_level",
	"QC"	: __DIR__"QC",
  ]) );

  set("light_up",1);
  setup();
}
