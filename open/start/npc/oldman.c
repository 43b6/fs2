// �������� by anmy 99/05/05 for ����ħ��eq
#include <ansi.h>
#include <../start.h>
 
inherit NPC;

void create()
{
	set_name("��������", ({"lonely old man","man" }) );
	set("gender", "����");
        set("nickname", HIM"��֮ʣ"NOR);
	set("age", 71);

set("long","�㿴��һλ����������ǰ,�ƺ�������Ѱ���ռ���ħ��װ������Ե��\n");
        set("per", 40);
	set("str", 25);
	set("con", 20);
	set("combat_exp", 10000000);
        set("no_kill",1);
	setup();
}

int accept_fight(object me)
{
	return
notify_fail("�������˿��˿Ȼ�����˵����λ"+RANK_D->query_respect(me)+"������Ц�˺���\n������������,�����ʸ�ָ������..\n");
}

int accept_object(object who , object item)
{
	if( item->query("id")=="mdragon-eq" ) {

tell_object(who,"ԭ�����˵���������������һ˲������һ��\n����ˬ������һ�ģ�С�ӣ���������ˣ���\n\n");
                if( !who->query("quests/�黹ħ��װ��") )
                    {		
     who->add("standby", 4);

tell_object(who,HIY"�������˿����Ц��һ����.\n"NOR);
tell_object(who,HIR"��������������������������������\n"NOR);
tell_object(who,HIY"һ��������Ȼ����, ���ƺ����˺ü����ı�����\n\n"NOR);
tell_object(who,HIW"ԭ�������������ط�ʹ�����ϵ���������ĸ�\n"NOR);

			who->set("quests/�黹ħ��װ��", 1);
		}
}
}
