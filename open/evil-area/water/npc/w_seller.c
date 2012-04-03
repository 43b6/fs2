inherit F_VENDOR;
#include <ansi.h>
inherit SSERVER;

void create()
{
	set_name("ˮ��",({"water seller","seller"}));
	set("long","
���������ͣ���ֱ���˼����ʩ�еıȣ�ٮ�õ����׼���������Ц��ʹ��
����Ϊ��������������ķ����ߣ�ÿ���˼������������ǻ���һЦ����
����Ҳ�����⡣\n");
	set("title",HIC" �� �� �� �� "NOR);
	set("nickname",HIG" �� �� �� �� "NOR);
	set("age",1293);
        set("gender", "Ů��" );
	set("kar",30);
	set("per",30);
	set("str",10);
	set("cor",10);
	set("combat_exp",100000);
	set("max_gin",10000);
	set("max_kee",10000);
	set("max_sen",10000);
	set("max_force",100000);
        set("force_factor",10);
	set("inquiry",([
		"а���":"а���??...а��粻����������??..����ô����ô��ֵ�����??\n",
		"ˮа��":"ม�ˮа������ˮ���������˵����ת����а��֮ǰ����һ������ˡ�\n",
		"ˮ���":"�š����ǹ��������������а��������...���ƺ��ĵ�̫��..���ʺϵ�а��...\n",
	]));

        set("vendor_goods", ({
		"/open/evil-area/water/npc/obj/cloth",
		"/open/evil-area/water/npc/obj/dagger",
		"/open/evil-area/water/npc/obj/cap",
		"/open/evil-area/npc/obj/enemy_pill",
		"/open/evil-area/npc/obj/damage_pill",
		"/open/evil-area/water/npc/obj/dumpling",
		"/open/evil-area/water/npc/obj/ice",
		"/open/evil-area/water/npc/obj/bag",
        }) );
	set_skill("unarmed",100);
	set_skill("move",100);
	set_skill("dodge",100);
	set_skill("force",100);
	setup();
}

void heart_beat()
{
	object ob,env,target;

	ob = this_object();
	env = environment(ob);
    	target = offensive_target(ob);
		if( env == environment(target) )
		{
                message_vision(HIW"
\n$N��У�������������Ҫɱ�Ұ���

"HIR"$Nһ��У��������е�а������Χ�˹�����$N�û�͵ҧ��$nһ�¾������ˡ�\n\n"NOR,ob,target);
                target->receive_wound("kee",100);
                COMBAT_D->report_status(target,1);
                target->start_busy(1);
		destruct(ob);		
		}
set_heart_beat(1);
::heart_beat();
}

void greeting(object ob)
{
int gender,per;

        gender = 0;
        per = ob->query("per");

        if( !ob || environment(ob) != environment() )
		return;

        if( ob->query("gender") == "Ů��")
        	gender = 1;

	if( per < 18 )
	{
		if( gender )
			command("say �ø����Ӱ������ĳ���ɸ����еıȨˡ�");
		else
			command("say ��λа���ޡ���ɳ�������ʮ�㰡����С�������Ķ����Ѩˡ�");
	}
	else
	{
		if( gender )
			command("say ���Ӱ���������˵����������Ҳ���ð��Լ����ĸ���һ������");
		else
			command("say ��λ���ĸ���û������а���ޡ����ҪС�ı������а�޴���ม�");
	}
	command("grin "+ob->query("id"));
	command("say ����������Щ�ɶ�������ر�Ʒ��������һ������Կ���\n");
}
