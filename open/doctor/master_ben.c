//master of cure
//change by adam

#include <ansi.h>
inherit NPC;
inherit F_MASTER;
int time=0;

void create()
{
	set_name("���",({"Master Ben","master","ben"}) );
        set("long",
	"��ȵ�ĵ��Ĵ�����̳��������־���㴫ҽѧ��\n
	������ͷСС�ģ���������һ��ɾ������ܵġ�\n");
	set("nickname",HIC"ҩ������"NOR);
	set("gender", "����" );
	set("combat_exp",1000000);
	set("force"       , 4000);
	set("max_force"   , 4000);
        set("force_factor", 20);
	set("class","doctor");
        set("title","ҽ�߹�����ϴ�");
        set("guild_master",1);
	set_skill("unarmed",60);
	set_skill("parry",40);
	set_skill("dodge",60);
	set_skill("force", 60);
	set_skill("literate",60);
	set_skill("cure",100);
	set_skill("dagger", 60);
	set_skill("move",40);
	set_skill("poison",70);
	set_skill("throwing",90);
	
	set("inquiry", ([
	"��ȵ":"����������֮���棬Ϊ�츣���ˣ��\n
	���������о�ҽѧ��Ҳ�Ǳ���֮��ɽʼ�档\n",
	"name":"�������Ǳ�ȵ�ĵ��Ĵ��������ָ��.\n",
	]) );

	setup();
}

void init()
{
	add_action("do_join","join");
	set_heart_beat(1);
}
void heart_beat()
{
	object pill;
	if(time++ > 1000)
	{
	pill=new(CLASS_D("doctor/medicine/curesick"));
        pill->set("value", 100000);
	pill->set("medicine_power",200);
	pill->move(this_object());
	command("auc pill");
	time=0;	
	}
        :: heart_beat();
}

int do_join(string str)
{
	object me=this_player();
	if(str!=0)
	  return notify_fail("���\"join\"���ɡ�\n");
	if(me->query("class")=="doctor")
	return notify_fail("�㲻Ҫ����Ц�ˣ��㲻����ͼ�������\n");
	if( me->query("class") )
	  return notify_fail("���Ѿ������˱�Ĺ�����\n");
	me->set("class","doctor");
/*
	printf("%s��%sһ������õ����롣\n",
	this_object()->name(),me->name());
*/
	tell_object(me,"�����㣡���Ѿ���Ϊҽ�ߵ�һԱ�ˡ�\n");
	 message("system",HIC "���������Ц :\n
	 ��ӭ" +this_player()->name()+ "���������� !\n
	 ����ҽ�����ں�������� !\n
	 ��λ����� , ������һ��ӭ���� !!\n\n"NOR,users());
	        
	
	
	return 1;
}
