// handson by anmy 97/12/26 for new year's quest
#include <ansi.h>
#include <../start.h>
 
inherit NPC;

void create()
{
	set_name("������", ({"handson du","du" }) );
	set("gender", "����");
        set("nickname", HIC"���ǵ�һ˧"NOR);
	set("age", 20);
	set("long","�㿴��һλ˧�����������ǰ,�������ƺ����ڷ��ո���ʲô��Ů�ѡ�\n");
        set("per", 40);
	set("str", 25);
	set("con", 20);
	set("combat_exp", 500000);

	setup();
}

int accept_fight(object me)
{
	return
notify_fail("������˵����λ"+RANK_D->query_respect(me)+"������Ц�˺���\n");
}

int accept_object(object who , object item)
{
	if( item->query("id")=="flower" ) {

tell_object(who,"������ʹ�������˵��лл���ˣ���������Ҫ��Ů�ѵĻ�~\n");
                if( !who->query("quests/happy") &&
                           who->query_temp("flower")==1 )
                    {		
     who->add("potential", 20000);

tell_object(who,HIY"�������������ߵ������ǰ, �������ǰ������һ��\n"NOR);
tell_object(who,HIR"��ֻ�����������ͨͨ��, һ�����۵ĸо���Ȼ����\n"NOR);
tell_object(who,HIY"�������������������˵��: ����һ��Сл��,��Ե�ټ���\n"NOR);
tell_object(who,HIW"���Ȼ����ȫ����������������..\n"NOR);

			who->set("quests/happy", 1);
		}
}
}
