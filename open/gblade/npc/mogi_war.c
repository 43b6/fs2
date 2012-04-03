// mogi_war.c by konn

#include <ansi.h>
inherit NPC;

int doing_set(object, object);

void create()
{
        set_name("��ħ��ս", ({"mogi war"}));
        set("long", "������ħ��ս�������\n");
}

string *must_room = ({
        "",
});

string *all_room = ({
        "",
});

string *all_mob = ({
        "/open/mogi/npc/ghost1",  "/open/mogi/npc/ghost2",
        "/open/mogi/npc/ghost3",  "/open/mogi/npc/ghost4",
        "/open/mogi/npc/ghost5",  "/open/mogi/npc/ghost6",
        "/open/mogi/npc/ghost7",  "/open/mogi/npc/ghost8",
        "/open/mogi/npc/ghost9",  "/open/mogi/npc/ghost10",
        "/open/mogi/npc/ghost11", "/open/mogi/npc/ghost12",
        "/open/mogi/npc/ghost13", "/open/mogi/npc/ghost14",
        "/open/mogi/npc/ghost15", "/open/mogi/npc/ghost16",
        "/open/mogi/npc/ghost17", "/open/mogi/npc/ghost18",
        "/open/mogi/npc/ghost19", "/open/mogi/npc/ghost20",
        "/open/mogi/npc/ghost21", "/open/mogi/npc/ghost22",
        "/open/mogi/npc/ghost23", "/open/mogi/npc/ghost24",
        "/open/mogi/npc/ghost25", "/open/mogi/npc/ghost26",
        "/open/mogi/npc/ghost27", "/open/mogi/npc/ghost28",
        "/open/mogi/npc/ghost29", "/open/mogi/npc/ghost30",
});

int mogi_war()
{
        delete("mogi_war_time");
        message("system",
                HIY"\nֻ����պ�Ȼ�������ܲ�, ңԶ���Ϸ���ճ���һ˿˿�����硣\n"+
                "���û��˿������, ����㾲��\n"+
                "������Ҳ��������ע������ա�\n\n"NOR, users());

        call_out("mogi_1", 3);
}

int mogi_1()
{
        message("system",
                HIG"\nͻȻ���ϱ���ճ�����СС�Ķ���, ֱ������˷���ȥ��\n"+
                "��������¡¡������, ������Զ����, ��С����, �����л�������"+
                "����ֽ�����\n\n"+
                "��ѽѽѽѽ����  ߴߴߴߴ����  �ع�����������\n\n"NOR, users());

        call_out("mogi_2", 3);
}

int mogi_2()
{
        message("system",
                HIC"\n�Ʋ�Խ��Խ��, ���������Ȼк��, ��ճ���һ����������ص�"+
                "���⡣\n"+
                "��ѻѻ�����Ʋ��ﴫ��һ���Ц��\n"+
                "�����½�������ͳ�Σ�  �ڰ���ȡ��������  ��������������"+
                "���һ��ǿ����Ʋ���ֱ�������\n\n"NOR, users());

        call_out("mogi_3", 3);
}

int mogi_3()
{
        message("system",
                HIB"\n֣ʿ���Ȼ̾��: ������������, ��ħ����, ����������!\n"+
                "��Ԫ�Խ��ŵ�: Ϊ�����»�����˹��������!\n"+
                "�������: ��ν������һ��, ħ��һ�ɡ�, ������˷���������ѽ!\n"+
                "ׯ����ŭ��: ��ħ����˵���֮! СŮ��Ը��һ��֮��!\n\n"NOR, users());

        call_out("mogi_4", 3);
}

int mogi_4()
{
        message("system",
                HIW"\n��������������һ������, ����ֱ���ϱ���ȥ��\n"+
                "�������ý��д���Ҫ������!\n\n"NOR, users());

        call_out("mogi_5", 60);
}

int mogi_5()
{
        message("system",
                HIY"\n��ؿ�ʼҡ��, �������Ѿ���ʼ��ˡ�\n\n"NOR, users());

        call_out("mogi_6", 3);
}

int mogi_6()
{
        object *user, mob, *obj;
        object room;
        int i, j, k;

        for(i=0; i<sizeof(must_room); i++) {
           mob = new(all_mob[random(5)+25]);
	   room = find_object(must_room[i]);
           obj = all_inventory(room);
           if( sizeof(obj)-1 >= 1 ) {
	       for(j=0; j<sizeof(obj); j++) 
                  if( obj[j]->query("privs") == -1 ) {
                      doing_set(mob, obj[sizeof(obj)-1]);
	              break;
		  }
               tell_room(room,
                    "�ص������һֻ"+mob->name()+"���������ܹ�����\n");
	       mob->move(room);
               for(j=0; j<sizeof(obj); j++)
                  if( obj[j]->is_character() && !wizardp(obj[j]) )
                      mob->kill_ob(obj[j]);
	   }
	   else mob->move(room);
        }

        user = livings();
        for(i=0; i<sizeof(user); i++)
           if( !wizardp(user[i]) ) {
               mob = new(all_mob[random(15)]);
               doing_set(mob, user[i]);
               mob->move(environment(user[i]));
               tell_room(environment(mob),
                    "�ص������һֻ"+mob->name()+"���������ܹ�����\n");
               mob->kill_ob(user[i]);
           }

        for(i=0; i<100; i++) {
           room = find_object(all_room[random(sizeof(all_room))]);
           obj = all_inventory(room);
           for(j=0; j<(random(3)+1); j++) {
               mob = new(all_mob[random(sizeof(all_mob))]);
               if( sizeof(obj)-1 >= 1 )
                   doing_set(mob, obj[random(sizeof(obj))]);
               tell_room(room,
                    "�ص������һֻ"+mob->name()+"���������ܹ�����\n");
	       mob->move(room);
               for(k=0; k<sizeof(obj); k++)
                  if( obj[k]->is_character()     &&
                      !wizardp(obj[k])           &&
                      !obj[k]->query("evil_mob")    )
                      mob->kill_ob(obj[k]);
           }
        }

        destruct(this_object());
}

int doing_set(object mob_1, object mob_2)
{
        object konn = find_player("konn");
        object weapon = mob_2->query_temp("weapon");
        string skill, m_skill;
        int exp, gin, kee, sen, force, mana, atman, f_fac, m_fac, a_fac;
        int lv_1, lv_2, apply;

        if( weapon ) skill = weapon->query("skill_type");
        else skill = "unarmed";

        lv_1 = mob_2->query_skill(skill, 1);
        m_skill = query_skill_mapped(skill);
        if( m_skill )
            lv_2 = mob_2->query_skill(m_skill, 1);

        lv_1 = (int) lv_1 * 1.2;
        lv_2 = (int) lv_2 * 1.2;
        mob_1->set_skill("unarmed", lv_1);
        mob_1->set_skill("hell-evil", lv_2);

        lv_1 = mob_2->query("dodge", 1);
        lv_1 = (int) lv_1 * 1.2;
        mob_1->set_skill("dodge", lv_1);

        lv_1 = mob_2->query("parry", 1);
        lv_1 = (int) lv_1 * 1.2;
        mob_1->set_skill("parry", lv_1);

        apply = mob_2->query_temp("apply/damage");
        mob_1->set_temp("apply/damage", apply);
        apply = mob_2->query_temp("apply/armor");
        mob_1->set_temp("apply/armor", apply);

        exp = (int) 1.5 * mob_2->query("combat_exp");
        gin = 2 * mob_2->query("max_gin");
        kee = 2 * mob_2->query("max_kee");
        sen = 2 * mob_2->query("max_sen");
        force = 2 * mob_2->query("max_force");
        mana = 2 * mob_2->query("max_mana");
        atman = 2 * mob_2->query("max_atman");
        f_fac = (int) 1.3 * mob_2->query("force_factor");
        m_fac = (int) 1.3 * mob_2->query("mana_factor");
        a_fac = (int) 1.3 * mob_2->query("atman_factor");

        mob_1->set("combat_exp", exp);
        mob_1->set("gin", gin);
        mob_1->set("max_gin", gin);
        mob_1->set("kee", kee);
        mob_1->set("max_kee", kee);
        mob_1->set("sen", sen);
        mob_1->set("max_sen", sen);
        mob_1->set("force", force);
        mob_1->set("max_force", force);
        mob_1->set("mana", mana);
        mob_1->set("max_mana", mana);
        mob_1->set("atman", atman);
        mob_1->set("max_atman", atman);
        mob_1->set("force_factor", f_fac);
        mob_1->set("mana_factor", m_fac);
        mob_1->set("atman_factor", a_fac);

	mob_1->delete("auto_size");
        mob_1->setup();
        if( konn )
            tell_object(konn, "ok.\n");
        return 1;
}
