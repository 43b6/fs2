// ȫ�¸İ� by swy
// �ٴ�������� npc �ᱩǿ���� by swy
#include <ansi.h>
#include <skill.h>
#include <weapon.h>
#include <combat.h>
#include <login.h>
inherit F_DBASE;
inherit SSERVER;
// skills ��� force ֵ
mapping force_div = ([
"fighter"   :500,
"bandit"    :400,
"swordsman" :400,
"blademan"  :400,
"scholar"   :300,
"bonze"     :300,
"officer"   :300,
"prayer"    :300,
"beggar"    :300,
"marksman"  :300,
"dancer"    :200,
"poisoner"  :100,
"killer"    :100,
"taoist"    :100,
"doctor"    :100,
]);
// skills ��� damage ֵ
mapping damage_div = ([
"fighter"   :500,
"bandit"    :400,
"swordsman" :400,
"blademan"  :400,
"scholar"   :300,
"bonze"     :300,
"officer"   :300,
"prayer"    :300,
"beggar"    :300,
"marksman"  :300,
"dancer"    :200,
"poisoner"  :100,
"killer"    :100,
"taoist"    :100,
"doctor"    :100,
]);
// class ����������
mapping hurt_div = ([
"fighter"   :500,
"bandit"    :600,
"swordsman" :600,
"blademan"  :600,
"scholar"   :700,
"bonze"     :700,
"officer"   :700,
"prayer"    :700,
"beggar"    :700,
"killer"    :700,
"marksman"  :700,
"dancer"    :800,
"poisoner"  :800,
"taoist"    :800,
"doctor"    :800,
]);
// class �мܵ���ֵ
mapping parry_div = ([
"dancer"    :       9,
"poisoner"  :       9,
"doctor"    :       8,
"taoist"    :       8,
"killer"    :       8,
"marksman"  :       7,
"scholar"   :       7,
"bandit"    :       7,
"prayer"    :       6,
"officer"   :       6,
"fighter"   :       6,
"bonze"     :       5,
"beggar"    :       5,
"blademan"  :       4,
"swordsman" :       4,
]);

string *guard_msg = ({
        CYN "$Nע����$n���ж�����ͼѰ�һ�����֡�\n" NOR,
        CYN "$N������$n��һ��һ������ʱ׼���������ơ�\n" NOR,
        CYN "$N�������ƶ��Ų�����Ҫ�ҳ�$n��������\n" NOR,
        CYN "$NĿ��ת���ض���$n�Ķ�����Ѱ�ҽ��������ʱ����\n" NOR,
        CYN "$N��ͣ����$n���������ţ�ר�ĵ�Ѱ��$n��������\n" NOR,
        CYN "$N�������ƶ��ŽŲ����Ż����֡�\n" NOR,
        CYN "$N�۹���·�������˷������о�����$n�����š�\n" NOR,
        CYN "$N����ΪӪ��˫��ֱ����$n�����ҳ�$n�ķ���©����\n" NOR,
});

string *catch_hunt_msg = ({
        YEL "$N��$n������������ۺ죬���̴���������\n" NOR,
        YEL "$N����$n��ȣ����ɶ������㣡��\n" NOR,
        YEL "$N��$nһ���棬������˵�ʹ���������\n" NOR,
        YEL "$Nһ����$n������ĵ�����������������Եѽ��ȥ���ɣ���\n" NOR,
        YEL "$Nһ��Ƴ��$n�����ߡ���һ�����˹�����\n" NOR,
        YEL "$Nһ����$n�����һ㶣���У����������㣡��\n" NOR,
        YEL "$N����$n����ĺ���һ��������$n�����أ�\n" NOR,
        YEL "$N��$n�������������ת����������У���С���˵������ܣ���\n" NOR,
});

int death_effect(object victim);
string dodge_skill, parry_skill,skill_map,class1,class2,class3,my_skill_message2,k_class;
string rstrone,rstrtwo;
int ap, dp, op, pp,fap,fdp, damage, damage_bonus, i,my_skill=0,choose_skill;
int wounded=0,ppp,divv,div1_2,div1,div2,c1,c2,cmexp,my_skill_power=0,power_dam;
int bssone=0;
int pod;
int dodge_ratio;

void create()
{
        seteuid(getuid());
        set("name", "����");
        set("id", "deadgod");
}

string damage_msg(int damage, string type)
{

	string str;
	object me = this_player();
	object victim;
	if(!me) me=previous_object();
	if(!me) return "";
	victim=offensive_target(me);
	if(!victim) return "";
	if( damage == 0 )
		return "���û������κ��˺���\n";
	//�ⲿ�ݻ��ճ���ҵ�����,��������Disable by Chan 2002/08/11
	/*
	if( damage > victim->query("max_kee")*2 ) {
		if( !userp(victim) )
			victim->set( "corpse_gone", 1 );
		str = HIR"����������䡱��һ���������, ���Ⱦ��ֵ�$n˲�仯���V��, �ҷ�����"NOR;
		if( wizardp(me) )
			str += "(" + damage + ")";
		return str + "\n";
	}
	*/
	if( wizardp(me) || wizardp(victim) )
		return "��� "HIR + damage + NOR" ��" + type + "��\n";
        switch( type ) {
        case "����":
        case "����":
                if( damage < 100 ) return "���ֻ������ػ���$p��Ƥ�⡣\n";
                else if( damage < 300 ) return "�����$p$l����һ��ϸ����Ѫ�ۡ�\n";
                else if( damage < 500 ) return "������͡���һ������һ���˿ڣ�\n";
                else if( damage < 700 ) return "������͡���һ������һ��Ѫ���ܵ��˿ڣ�\n";
                else if( damage < 900 ) return "������͡���һ������һ���ֳ�������˿ڣ�����$N������Ѫ��\n";
                else return "���ֻ����$nһ���Һ���$w����$p$l����һ������ǵĿ����˿ڣ���\n";
                break;
        case "����":
                if( damage < 100 ) return "���ֻ������ش���$p��Ƥ�⡣\n";
                else if( damage < 300 ) return "�����$p$l�̳�һ�����ڡ�\n";
                else if( damage < 500 ) return "������ۡ���һ��������$n$l����\n";
                else if( damage < 700 ) return "������ۡ���һ���̽�$n��$l��ʹ$p�������������˼�����\n";
                else if( damage < 900 ) return "��������͡���һ����$w����$p$l�̳�һ��Ѫ��U����Ѫ������\n";
                else return "���ֻ����$nһ���Һ���$w����$p��$l�Դ���������Ѫ�������أ���\n";
                break;
        case "����":
                if( damage < 500 ) return "���ֻ����������������Ĳ�Ӭ��΢���˵㡣\n";
                else if( damage < 1000 ) return "�����$p��$l���һ�����ࡣ\n";
                else if( damage < 1500 ) return "���һ�����У�$n��$l��ʱ����һ���ϸߣ�\n";
                else if( damage < 2000 ) return "���һ�����У�$n�ƺ���һ����Ȼ���˲�С�Ŀ���\n";
                else if( damage < 2500 ) return "������顱��һ����$n����������\n";
                else if( damage < 3500 ) return "�����һ�¡��顱��һ�����$n�����˺ü�������һ��ˤ����\n";
                else if( damage < 4500 ) return "������صػ��У�$n���ۡ���һ���³�һ����Ѫ��\n";
                else if( damage < 5500 ) return "����������ء��䡱��һ��ʹ��$nѪ�����أ�\n";
                else return "���ֻ�������顱��һ�����죬$n��һ�����ݰ���˳�ȥ����\n";
                break;
        case "����":
                if( damage < 100 ) return "���ֻ�Ǵ�$l�������������\n";
                else if( damage < 300 ) return "���ž��һ����$p$l����һ�����ı޺ۡ�\n";
                else if( damage < 500 ) return "���ˢ��һ����$p$l����һ���ֳ�����Ŀɲ�Ѫ�ۣ�\n";
                else if( damage < 700 ) return "���$nһ�������������Ѷ���������ǵĿ����˿ڣ�\n";
                else if( damage < 900 ) return "���ֻ����$nһ���ҽУ�$n$l�ѱ����Ƥ������,��Ѫֱ����\n";
                else return "���һ������,ֻ��������һ��,��n���ŵ���$l��Ϲ���,��Ѫ��ӿ��ֹ����\n";
                break;
        default:
                if( !type ) type = "�˺�";
                if( damage < 100 ) str =  "���ֻ����ǿ���һ����΢";
                else if( damage < 300 ) str = "��������΢��";
                else if( damage < 500 ) str = "������һ��";
                else if( damage < 700 ) str = "������һ������";
                else if( damage < 900 ) str = "��������Ϊ���ص�";
                else if( damage < 1100 ) str = "�������൱���ص�";
                else if( damage < 1300 ) str = "������ʮ�����ص�";
                else if( damage < 1500 ) str = "�����ɼ������ص�";
                else str =  "�����ɷǳ����µ�����";
                return str + type + "��\n";
        }
}

string eff_status_msg(int ratio)
{
        if( ratio==100 ) return HIW "��������Ѫ��ӯ����û�����ˡ�" NOR;
        if( ratio > 95 ) return HIG "�ƺ����˵����ˣ��������������������" NOR;
        if( ratio > 90 ) return HIG "�������������˵����ˡ�" NOR;
        if( ratio > 80 ) return GRN "���˼����ˣ������ƺ��������¡�" NOR;
        if( ratio > 60 ) return HIY "���˲��ᣬ������״������̫�á�" NOR;
        if( ratio > 40 ) return YEL "��Ϣ���أ�������ʼɢ�ң��������ܵ�����ʵ���ᡣ" NOR;
        if( ratio > 30 ) return HIR "�Ѿ��˺����ۣ���������֧���Ų�����ȥ��" NOR;
        if( ratio > 20 ) return HIR "�����൱�ص��ˣ�ֻ�»�������Σ�ա�" NOR;
        if( ratio > 10 ) return RED "����֮���Ѿ�����֧�ţ��ۿ���Ҫ���ڵ��ϡ�" NOR;
        if( ratio > 5  ) return RED "���˹��أ��Ѿ�����һϢ�����ڵ�Ϧ�ˡ�" NOR;
        return                  RED "���˹��أ��Ѿ�������в�����ʱ�����ܶ�����" NOR;
}

string status_msg(int ratio)
{
        if( ratio==100 ) return HIW "����������������һ��Ҳ���ۡ�" NOR;
        if( ratio > 95 ) return HIG "�ƺ���Щƣ����������Ȼʮ���л�����" NOR;
        if( ratio > 90 ) return HIG "������������Щ���ˡ�" NOR;
        if( ratio > 80 ) return GRN "�����ƺ���ʼ�е㲻̫��⣬������Ȼ�������ɡ�" NOR;
        if( ratio > 60 ) return HIY "�������꣬������״������̫�á�" NOR;
        if( ratio > 40 ) return YEL "�ƺ�ʮ��ƣ����������Ҫ�ú���Ϣ�ˡ�" NOR;
        if( ratio > 30 ) return HIR "�Ѿ�һ��ͷ�ؽ����ģ������������֧���Ų�����ȥ��" NOR;
        if( ratio > 20 ) return HIR "�������Ѿ����������ˡ�" NOR;
        if( ratio > 10 ) return RED "ҡͷ���ԡ�����бб��վ��վ���ȣ��ۿ���Ҫ���ڵ��ϡ�" NOR;
        return                  RED "�Ѿ���������״̬����ʱ������ˤ����ȥ��" NOR;
}

varargs void report_status(object ob, int effective)
{
  if(!ob) return ;
  if(ob->query("max_kee") <1) return ;
        if( effective )
            message_vision( "( $N" + eff_status_msg(
                   (int)ob->query("eff_kee") * 100 / (int)ob->query("max_kee") )
                   + " )\n", ob);
        else
            message_vision( "( $N" + status_msg(
                   (int)ob->query("kee") * 100 / (int)ob->query("max_kee") )
                   + " )\n", ob);
}

// by ACKY
varargs void report_kee( object me )
{
	tell_object( me, sprintf( "\t[ %s����: %d"NOR" %s��Ѫ: %d"NOR" %s���: %d"NOR" ]\n",
		STATUS("gin"), me->query("gin"), STATUS("kee"), me->query("kee"), STATUS("sen"), me->query("sen") ) );
}

varargs int skill_power(object ob, string skill, int usage)
{
        int level, power, app1, app2,mpower;
        if(!ob) return 0;
        if( !living(ob) ) return 0;
        level = ob->query_skill(skill);
        switch(usage) {
                case SKILL_USAGE_ATTACK:
                        app1 = ob->query_temp("apply/attack");
                        if(userp(ob)) {
                        if(app1>100) app1=100;
                        } else { if(app1>80) app1=80; }
                        level += app1;
                        break;
                case SKILL_USAGE_DEFENSE:
                        app1 = ob->query_temp("apply/defense");
                        if(userp(ob)) {
                        if(app1>100) app1=100;
                        } else { if(app1>80) app1=80; }
                        app2 = ob->query_temp("apply/armor");
                        if(userp(ob)) {
                        if(app2>100) app2=100;
                        } else { if(app2>80) app2=80; }
                        level += (app1+app2);
                        break;
                case SKILL_USAGE_OTHER:
                        app1 = ob->query_temp("apply/dodge");
                        if(userp(ob)) {
                        if(app1>100) app1=100;
                        } else { if(app1>80) app1=80; }
                        app2 = ob->query_temp("apply/parry");
                        if(userp(ob)) {
                        if(app2>100) app2=100;
                        } else { if(app2>80) app2=80; }
                        level += (app1+app2);
                        break;
        }
        if( !level ) return (int)ob->query("combat_exp")/2000;
//mpower,�������temp����,doctor and wizר��,by bss
        if(ob->query_temp("mpower")==1
          && (ob->query("class")=="doctor" || wizardp(ob))) {
          power = (level*level)*2; }
//mpower,��set���,����temp��,npc and wizר��, by swy and bss
        else if(wizardp(ob) || !userp(ob)) {
            mpower=ob->query("mpower")+1; 
        if(!mpower) mpower=1;
        power = (level*level)*mpower; 
       }
          else {
            mpower=1;
          power = (level*level)*mpower;        
          }
        return power + (int)ob->query("combat_exp")/2000;
}

varargs int do_attack(object me, object victim, object weapon, int attack_type)
{
        object *t;
        mapping my,your, action;
        string limb, *limbs, result, attack_skill,arrow_path,my_skill_message,skill_number;
        rstrone="";
        rstrtwo="";
        my = me->query_entire_dbase();
        your = victim->query_entire_dbase();
        // ================================================================
        // (1) �ҳ����ѶϢ, ���������������
        // ���� by ChanΪ�������ʹ�ó��Լ�����ʽ����������!!!!Ŀǰֻ����Ƴ���������ʽ!!!
        // ��Ҫ�Ƿֳɶ�����
        action = me->query("actions");

        if( !mapp(action) ) {
            me->reset_action();
            action = me->query("actions");
        }
        if( !mapp(action) ) {
            CHANNEL_D->do_channel( this_object(), "sys",
                sprintf("%s(%s): bad action = %O",
                        me->name(1), me->query("id"), me->query("actions", 1)));
            return 0;
        }
// �Դ���ʽ����  by swy
     if(me->query("env/my_skill") && (sizeof(me->query("hero")) > 2) && (random(100) < 30))
     {
         choose_skill=sizeof(me->query("hero"));
        if(me->query("combat_exp") > 8000000 && random(100) < 6)
         {
          choose_skill=choose_skill-1;
          for(i=1;i<choose_skill;i++)
           {
            skill_number=sprintf("%d",i);
            my_skill_message2=me->query("hero/action"+skill_number);
            my_skill_message=my_skill_message+"\n"+my_skill_message2+"\n";
            my_skill_message=my_skill_message+HIW+"$N������뽣��ͨ���ľ���,���಻����ʹ���Դ�֮��ʽ"+NOR;
           }
         }
        else{
         choose_skill=choose_skill-1;
         choose_skill=random(choose_skill); //ȡ�����ķ�ʽ���ҳ��ʺϵ�!!!!
         if(!choose_skill) choose_skill=1;
         skill_number=sprintf("%d",choose_skill);
         if(!me->query("hero/action"+skill_number))
           my_skill_message="$N��ʽ��û����ƺ�!!����ʽ������������!!!!\n";
         else
           my_skill_message=me->query("hero/action"+skill_number);
        }
        result = "\n" + my_skill_message + "\n";
        my_skill_power=choose_skill-1;
       }
      else {
        result = "\n" + action["action"] + "\n";
       }
// ���������������,����������,������������� by swy
        if( objectp(weapon) )   attack_skill = weapon->query("skill_type");
        else attack_skill = "unarmed";
        limbs = victim->query("limbs");
        limb = limbs[random(sizeof(limbs))];
        ap = skill_power(me, attack_skill, SKILL_USAGE_ATTACK);   // ����������
        if( !ap ) ap = 1;
        dp = skill_power(victim, "dodge", SKILL_USAGE_DEFENSE);   // ����������
        if( !dp ) dp = 1;
        op = skill_power(victim, "dodge", SKILL_USAGE_OTHER);     // �������������
        if( !op ) op = 1;
        if( objectp(weapon) )  {
        damage = (int) me->query_temp("apply/damage");
        if( damage > 500 ) damage = 500;
        } else damage = 0;
// �� skill ��Ϊ��Ҫ���˺��� by swy
        skill_map = me->query_skill_mapped(attack_skill);
        me->set_temp("level_1", me->query_skill(attack_skill, 1));
        me->set_temp("level_2", me->query_skill(skill_map, 1));
        me->set_temp("level_3", me->query_skill("force", 1));
// npc �˺������ ppl СһЩ by swy        
        damage += (int)(me->query_temp("level_1")*2+me->query_temp("level_3"));
                if(userp(me)) {
        if( me->query_temp("level_2") >= 1 )
        damage += me->query_temp("level_2")*3;
        else damage = damage; } else {
        if( me->query_temp("level_2") >= 1 )
        damage += me->query_temp("level_2")*2;
        else damage = damage; }
        me->delete_temp("level_1");
        me->delete_temp("level_2");
        me->delete_temp("level_3");
// �����˺����ȼ��ϱ���Ӱ�� by swy
// ���� skills �� damage ��ֵ
// �Ұ� skills �� damage �趨�� combatd.c ����
// һ�����ҿ��Բ��ø� skills �� damage
// ��һ������Է�ֹ���˶����� by swy
// û�� class npc �� skills damage ����� 700 ������ by swy
// û�� class ppl �� skills damage ����� 50 ������ by swy
        damage_bonus = my["str"];
        class1=my["class"];
        divv=damage_div[class1];
        if(!divv && !userp(me) && action["damage"]) {
        divv=action["damage"];
                if(!divv) divv=100;
        if(divv>700) divv=700; }
        else if(!divv && !userp(me)) {
        divv=100; } else {
        if(!divv && userp(me)) divv=50;
        }
if(find_player("swy") && find_player("swy")->query("env/divv"))
tell_object(find_player("swy"),sprintf("damage=%d\n",divv));
        damage += divv;
// ���� busy ʱ�������� 20% by swy
        if( victim->is_busy() ) dp=dp*4/5;

        //������ԣ�action���趨dodge���������ʵ�Ӱ��
        //dodge�ķ�Χ��-100~100���趨-100�Ļ��������б������ɣ��㶼�㲻��
        //0�Ļ����Ǵ������벻����ȫ��֮ǰ�Ĺ�ʽ������
        //��ֵ������ӵ��˶������еĿ���
        //�����������������Դ���ʱdp�ļ��������� by bss
        //��Ϊ�ǲ��ԣ�����ָ������
        if(me->query("class")=="lancer" || wizardp(me))
        if(action["dodge"]){
          dodge_ratio=action["dodge"];
          if(dodge_ratio >0){
            while(dodge_ratio >100)//�趨����100�Ļ������趨����
              dodge_ratio/=100; //�����ȳ�100��˵
            dp=dp+(dp*dodge_ratio)/100;
          }
          else{
            while(dodge_ratio < -100)//�趨������-100�����趨����
              dodge_ratio/=100; //�����ȳ�100��˵
            dodge_ratio=100-(100+dodge_ratio);
            dp=(dp*dodge_ratio)/100; //���ratio�ı���
            if(!dp) dp=1; //���dodge�趨��-100�Ļ�����dpһ������ֵ1
          }
        }
// ������Ӧ���� class ������ + ʵս�������ж� by swy
// ����������� npc ��û�� class �趨Ϊ 500 by swy
// ����������� npc ��û�� class �趨Ϊ 500 by swy
class2=my["class"];
div1=hurt_div[class2];
if(userp(me) && !div1) div1=400;
if(!userp(me) && !div1) div1=500;
c1=(int)my["combat_exp"];
c2=(int)your["combat_exp"];
if(c1-c2<0) { div2=0; }
else if(c1-c2>=4000000) { div2=400; }
else if(c1-c2>=3000000) { div2=300; }
else if(c1-c2>=2000000) { div2=200; }
else if(c1-c2>=1000000) { div2=100; }
else { div2=50; }
div1_2=div1+div2;
if(div1_2>900) div1_2=900;
// ����ϵͳ part 1 by swy
// �������ۻ����������ʼ���  ˫�۶�����ʧ��  ������ = 0
// ��Ȼ����    Ҳ�� doctor ����ҽ��
if(me->query_temp("over/r-eyes")==1&&me->query_temp("over/l-eyes")==1) {
div1_2=100;
tell_object(me,HIY"��˫��ʧ�����������ʿ���!\n"NOR);
} else if(me->query_temp("over/r-eyes")==1||me->query_temp("over/l-eyes")==1) {
div1_2 /= 2;
tell_object(me,HIG"���۾��������������һ��!\n"NOR);
}
if(find_player("swy") && find_player("swy")->query("env/divv"))
tell_object(find_player("swy"),sprintf("hurt=%d\n",div1_2));
if(find_player("cgy") && find_player("cgy")->query("env/divv"))
tell_object(find_player("cgy"),sprintf("hurt=%d\n",div1_2));
            if(div1_2<random(1000)) {
            dodge_skill = victim->query_skill_mapped("dodge");
            if( !dodge_skill ) dodge_skill = "dodge";
            if (SKILL_D(dodge_skill)->query_dodge_msg(limb))
              result += SKILL_D(dodge_skill)->query_dodge_msg(limb);
            if( dp < ap && (!userp(victim) || !userp(me))
               && random(your["gin"]*100/your["max_gin"] + your["int"]) > 50 ) {
                    your["combat_exp"] += 1;
                    victim->improve_skill("dodge", 1);
            }
            damage = RESULT_DODGE;
        }
        else {
// �Ƿ��мܿ� by swy
            if( victim->query_temp("weapon") ) {
                    pp = skill_power(victim, "parry", SKILL_USAGE_OTHER);
                    pp = pp * 1.2;
            }
            else {
                    pp = skill_power(victim, "parry", SKILL_USAGE_OTHER);
            }
            class1=your["class"];
            if(!class1) divv=10;
            else
            divv=parry_div[class1];
            if(!divv) divv=10;
if(find_player("bss") && find_player("bss")->query("env/check_combat"))
tell_object(find_player("bss"),sprintf("divv=%d\n",divv));
if(find_player("swy") && find_player("swy")->query("env/divv"))
tell_object(find_player("swy"),sprintf("parry=%d\n",divv));
if(find_player("cgy") && find_player("cgy")->query("env/divv"))
tell_object(find_player("cgy"),sprintf("parry=%d\n",divv));
            if( victim->is_busy() )
            pp=pp/divv;
            else {
            ppp = (pp*10)/divv;
            pp=(pp+ppp)/2;
            }
            if( pp < 1 || !pp ) pp = 1;
// ����parry message by Roger && Chan
// ˵��:ֻ�е��ҷ������б�������Ҷ�û����ʱ�����м�
// ���仰˵����Է��б����Լ�û�þ��޷��м���
// ������ʱ��parry_msg�������߲���������������parry_msg ��һ�� By Roger

            if( random(ap + pp) < pp ) {

                if( dp < ap && (!userp(victim) || !userp(me))
                   && random(your["gin"]*100/your["max_gin"] +
                      your["int"]) > 50 ) {
                         your["combat_exp"] += 1;
                         victim->improve_skill("parry", 1);
                }
            if( victim->query_temp("weapon") || your["class"]=="fighter" )
                {
                parry_skill = victim->query_skill_mapped("parry");
                if( !parry_skill )
                result += SKILL_D("parry")->query_parry_msg(weapon);
                else if (SKILL_D(parry_skill)->query_parry_msg(limb))
                result += SKILL_D(parry_skill)->query_parry_msg(limb);
                else result += SKILL_D("parry")->query_parry_msg(weapon);
// �����ܹ� by swy
if((victim->query("class")=="bonze"||victim->query("class")=="bandit"||victim->query("id")=="swy")
&& victim->query_skill("counter",1)>random(200) && attack_type!=TYPE_QUICK) {
    victim->set_temp("can_contour",1); }
                } else if(!me->query_temp("weapon")&&!victim->query_temp("weapon")) {
                result += SKILL_D("parry")->query_parry_msg();
// �����ܹ� by swy
if((victim->query("class")=="bonze"||victim->query("class")=="bandit"||victim->query("id")=="swy")
&& victim->query_skill("counter",1)>random(200) && attack_type!=TYPE_QUICK) {
    victim->set_temp("can_contour",1); }
                } else {
result += HIR+"$nû��"+HIW+"����"+HIR+"ж������"+HIC+"����"+HIR+"��������������ˡ�\n"+NOR;
victim->set_temp("no_weapon_parry",1); }
damage = RESULT_PARRY;
            } else {
// �򵽵���������Ӱ�� by swy
        if( my["force_factor"]>0 && my["force"]>=my["force_factor"]) {
                    my["force"] -= my["force_factor"];
                    fap = skill_power(me, "force");
                    fdp = skill_power(victim, "force");
// ������Ӱ��,������
                    if( your["force_factor"] > 0 &&
                        random(fap + fdp) < fdp ) {
                            damage_bonus = 0;
                            result += "����$N��ʽ�������ھ���$n�Ļ������������⣬";
                            if( fdp < random(fap) && userp(me) )
                                    victim->improve_skill("force", 1);
                    }
// ������Ӱ��, ����
                    else {
// û�� class ppl �� skills force ����� 50 ������ by swy
// û�� class npc �� skills force ����� 700 ������ by swy
class1=my["class"];
divv=force_div[class1];
if(!divv && !userp(me) && action["force"]) {
divv=action["force"];
if(!divv) divv=100;
if(divv>700) divv=700;
} else if(!divv && !userp(me)) {
divv=100;
} else { if(!divv && userp(me)) divv=50; }
if(find_player("swy") && find_player("swy")->query("env/divv"))
tell_object(find_player("swy"),sprintf("force=%d\n",divv));
damage_bonus+=(int)(my["force_factor"]*divv*0.15);
}
}

                if( damage_bonus > 0
                   && your["force_factor"] > 0
                   && your["force"] >= your["force_factor"] ) {
                      if( living(victim) ) result += "$N���ھ�������$n���ϵĻ���������";
                      else                 result += "$n���ϵ�������Ȼ������һ�ɿ��ܵ�������";
                      power_dam = your["max_force"];
                      damage_bonus -= (power_dam / 10);
                      your["force"] -= your["force_factor"];
                    }

                damage_bonus -= (int)victim->query_temp("apply/armor_vs_force");
                damage_bonus -= (int)(dp/150);
                // =============================================================
                //    (6) Apply the damage bonus to the damage we'll inflict.
                //        ���˺�ֵ����ȥ
                //

                if( damage_bonus > 0 )
                damage += (int)damage_bonus;
                else damage = damage;

                if( attack_type == TYPE_QUICK )
                        damage += 100;

                // �Ż������һ��

                if( userp(me) )
                    if( me->query("mud_age") < 10800 ) {
                        damage += (int) my["str"];
                        message_vision(HIY "ֻ��$N���Ի�����һȦ���, "+
                                "$N��������ǿ��!��\n" NOR, me);
                    }
                    else if( me->query("mud_age") < 11400 )
                        message_vision(HIY "$N���Եĺ�⽥����������, "+
                                "������ƽ����\n" NOR, me);
// ���˺������Ϲ�����,�ڼ���������Ϊ���˺��� by swy
damage += (ap/100);
damage -= (op/100);
if(userp(me)) {
damage=(int)damage;
} else { damage=(int)damage*0.85; }
if(damage<=0) damage=100;
if( victim->query_temp("losehurt")==1 )
{ damage=(int)(damage/2); }
                if (victim->query_temp("unsuck")==1)
                {
message_vision(HIY"\n�������֡�ʮ�ɹ�������Ȼ����������$N������$n�Ĺ���ȫ�������ȥ��\n"NOR,me,victim);
                    me->add("kee",-(damage));
                    me->add("eff_kee",-(damage));
                    report_status(me);
                    if(damage > 0) damage=0;
                       victim->delete_temp("unsuck");
                }
                if (victim->query_temp("goldheal")==1)
                {
message_vision(HIY"\nֻ������_��_��һ����$N�Ĺ��ƾ���$n�ġ������֡���ȥ��\n"NOR,me,victim);
                  if(damage > 30) damage=30;
                     victim->delete_temp("goldheal");
                }
           if (me->query_temp("powerup")==1 ) {
                    damage += 250;
                }
                    if (me->query_temp("keeup")==1 ) {
                    damage = damage*3/4;
                }
// �������ӻ��� by swy
c1=(int)my["combat_exp"];
c2=(int)your["combat_exp"];
if(c1-c2<0) { div2=0; }
else if(c1-c2>=4000000) { div2=40; }
else if(c1-c2>=3000000) { div2=30; }
else if(c1-c2>=2000000) { div2=20; }
else if(c1-c2>=1000000) { div2=10; }
else { div2=5; }
div1_2=90-div2;
if(div1_2<50) div1_2=50;
if(div1_2>random(100)) {
if ( victim->query_temp("ref_shield")==1)
{
message_vision(HIC"\n�������"HIM"��$N�Ĺ�����ȫ�ķ�����ȥ!!\n"NOR,me,victim);
                me->receive_damage("kee",(damage),victim);
                me->receive_wound("kee",(damage),victim);
                if(damage > 0) damage=0;
                report_status(me,1);
                }
}
// dancer manashield ����
if ( victim->query_temp("mana_shield")==1)//dancer
{
message_vision(HIW"\n����֮����Լ���֣���������������ؽ�$N��������������!!\n"NOR,me,victim);
                if(damage > 0) damage=damage/2;
				report_status(victim,1);
                }
if ( victim->query_temp("mana_shield2")==1)//non dancer
{
message_vision(HIY"\n����֮����Լ���֣���������������ؽ�$N������������!!\n"NOR,me,victim);
                if(damage > 0) damage=damage*2;
				report_status(victim,1);
                }
if ( victim->query_temp("mana_shield3")==1)//fighter,prayer
{
message_vision(HIY"\n����֮����Լ���֣���������������ؽ�$N������������!!\n"NOR,me,victim);
                if(damage > 0) damage=damage*4;
                report_status(victim,1);
                }
if ( victim->query_temp("mana_shield4")==1)//mblade
{
message_vision(HIY"\n����֮����Լ���֣���������������ؽ�$N������������!!\n"NOR,me,victim);
                if(damage > 0) damage=damage*8;
                report_status(victim,1);
                }

                        //power_down......by cgy....
if (me->query_temp("power-down")>=1)
{
 pod=me->query_temp("power-down");
 if (pod>16) {damage=damage/10;}
 if (pod>14&&pod<17) {damage=damage/5;}
 if (pod>12&&pod<15) {damage=damage*3/10;}
 if (pod>10&&pod<13) {damage=damage*4/10;}
 if (pod>8&&pod<11) {damage=damage*5/10;}
 if (pod>6&&pod<9) {damage=damage*6/10;}
 if (pod>4&&pod<7) {damage=damage*7/10;}
 if (pod>2&&pod<5) {damage=damage*8/10;}
 if (pod>0&&pod<3) {damage=damage*9/10;}
 }
 if (victim->query_temp("rainbow-steps")==1 && random((int)victim->query("functions/rainbow-steps/level",1))>60)
 {
  message_vision(HIY"\n$n"NOR"ʹ����Ӱ΢���ռ��貽"HIW"��"HIM"�߲ʻ���"NOR",�����߲ʶд��ó�һ���ʺ�����"HIB"$N��\n"NOR,me,victim);
  message_vision(HIY"                $n"HIR"�䱾����"HIG"�����۵а�Ķ��"HIY"$N"HIR"��������������\n"NOR,me,victim);
  if(damage > 0) damage=0;
 }
 if (victim->query_temp("snake-steps")==1 && random((int)victim->query("functions/snake-steps/level",1))>70)
 {
  message_vision(HIC"\n$n"HIR"��Ӱ�û���ǧ���ķ�����,��Ӱ������"HIY"$N"HIR"�Ĺ��ƿ����Ӱ����\n"NOR,me,victim);
  message_vision(HIG"  ������͡���һ�����߲ʹ�â��"HIB"$N"HIG"�����ϴ�͸����, ��"HIB"$N"HIG"��ʧ����\n"NOR,me,victim);
  message_vision(HIY"                $n"HIC"�û�����"HIB"$N"HIC"���͵Ĺ�����\n"NOR,me,victim);
  if(damage > 0) damage=0;
 }
 if (victim->query_temp("adv-dodge")==1)
 {
  message_vision(HIY"\n$nʹ��"HIG"����Ӱ����"HIY"��Ѹ���ޱȵ��ٶ�����$N�Ĺ���������һ����$N�ش���\n"NOR,me,victim);
  me->add("kee",-(damage));
  report_status(me);
  if(damage > 0) damage=0;
 }
       if(me->query_temp("kang-power")==1) {
message_vision(HIW"$N�ġ��������������������ʹ$N���������Ӳ��١�\n"NOR,me);
 damage += 350;
}
                if (victim->query_temp("hardshell") ) {
                  if( damage > 10 ) damage = 10;
                }
                if(victim->query_temp("hwa_je")){
                  if(damage >0) damage=0;
                }
                if (me->query_temp("addpower")==1)
                {
                  damage += 1500;
                  me->delete_temp("addpower");
                }
                if (me->query("mpower")) {
                  damage += 300;
                }
// ����һ�� bug �Դ���ʽ�� fighter û�÷������� damage
// ���Ƕ���������ȴ������֮�� ���һ�� class damage �� 1000
// �� 1000 * my_skill_power ��ܿ���   ��Ϊ my_skill_power ��߿��� 8
// �� 1000 * 8 = 8000 ���͵��ڽ� fighter ȥ����
// ����Ϊ�˽����Ӹ� 100 �ͺ���     by swy
                if(me->query("env/my_skill")) {
                  damage=damage+100;
                 } else {
                 if(userp(me) && userp(victim)) { damage = damage; }
                 else { damage=(int)damage*0.85; } }
// ����ϵͳ part 2  by swy
// �����һ����� damage ����  ���������� damage = 0
// �����ֶ����˵�Ȼû����  �ܺ���   Ҫ������������� doctor �˹���
if(me->query_temp("over/right")==1&&me->query_temp("over/left")==1) {
damage=30;
tell_object(me,HIC"��˫�����˺����˺�������!\n"NOR);
} else if(me->query_temp("over/right")==1||me->query_temp("over/left")==1) {
damage /= 2;
tell_object(me,HIR"���������˺������һ��!\n"NOR);
}
if(find_player("swy") && find_player("swy")->query("env/divv"))
tell_object(find_player("swy"),sprintf("all=%d\n",damage));
if(find_player("cgy") && find_player("cgy")->query("env/divv"))
tell_object(find_player("cgy"),sprintf("all=%d\n",damage));
                victim->set_temp("no_armor_effect",1);
                result += damage_msg(damage, action["damage_type"]);
//2001.11.1 ����Ĳ��� ɱ�ֵĵ��Ľ׶ν��� ��֮��ɱ��ר������ ��Ӱ���Ķ���
//	    ����������д��dodge�Ǳߣ�����֮��ͻ���%��damage��0
//2002.04.04 �����߼��ϵĴ���
 if (victim->query_temp("shadowfun") > 0)
 {
      switch ( victim->query("dark-steps/shadow/lv") )
      {
      	case 0..10 : //50%
      		if (random (100) > 50)
      		{
  message_vision(HIW"\n$n �������а��ԵĲ������������ռ��лû������޵���Ӱ,"HIY"$N"HIW"�����޴ӹ����𡣣�\n"NOR,me,victim);
      		  damage = 0;      		
      		}
      		break;
      	case 11..40 : //60%
      		if (random (100) > 40)
      		{
  message_vision(HIW"\n$n �������а��ԵĲ������������ռ��лû������޵���Ӱ,"HIY"$N"HIW"�����޴ӹ����𡣣�\n"NOR,me,victim);
  message_vision(HIW"$N ��������Ӱ������ȥ,$n˿�����ܵ�һ���˺���\n"NOR,me,victim);
  			me->receive_damage("gin", 150 , victim );
      			damage = 0;
      		}
      		break;
      	case 41..70 :
      		if (random (100) > 30)
      		{
  message_vision(HIW"\n$n �������а��ԵĲ������������ռ��лû������޵���Ӱ,"HIY"$N"HIW"�����޴ӹ����𡣣�\n"NOR,me,victim);
  message_vision(HIW"$N ��������Ӱ������ȥ,$n˿��û���ܵ�һ���˺���\n"NOR,me,victim);
  			me->receive_damage("gin", random(150)+150 , victim );
      			damage = 0;
      		}
      		break;
      	case 71..100:
      		if (random (100) > 20)
      		{
  message_vision(HIW"\n$n �������а��ԵĲ������������ռ��лû������޵���Ӱ,"HIY"$N"HIW"�����޴ӹ����𡣣�\n"NOR,me,victim);
  message_vision(HIW"��Ӱ���ϵ���"HIG"$N"HIW"����߻���, ��"HIG"$N"HIW"�е����޵Ŀ־�\n"NOR,me,victim);
  message_vision(HIR"$n"HIW"��ʹ���ķ�Ӱ������"HIG"$N"HIW"������֪����η������ơ�\n"NOR,me,victim);
  			me->receive_damage("gin", random(250)+150 , victim );
  			me->start_busy(1);
      			damage = 0;
      		}
      		break;
      	case 101..150: //ר�Ҽ���ֻ�����⽱�����ſ��������˼�
      		if (random (100) > 10)
      		{
  message_vision(HIW"\n$n �������а��ԵĲ������������ռ��лû������޵���Ӱ,"HIY"$N"HIW"�����޴ӹ����𡣣�\n"NOR,me,victim);
  message_vision(HIW"��Ӱ���ϵ���"HIG"$N"HIW"����߻���, ��"HIG"$N"HIW"�е����޵Ŀ־�\n"NOR,me,victim);
  message_vision(HIR"$n"HIW"��ʹ���ķ�Ӱ������"HIG"$N"HIW"������֪����η������ơ�\n"NOR,me,victim);
  message_vision(HIW"$N ��������Ӱ������ȥ,$n˿��û���ܵ�һ���˺���\n"NOR,me,victim);
  			me->receive_damage("gin", random(400)+150 , victim );
  			me->start_busy(1);
      			damage = 0;
      		}
      		break;
      	default: //��ʦ���п�����һ��
      		me->receive_damage("gin", random(1999)+600 , victim );
  		me->start_busy(2);
      		damage =0;
      }
      //������û�з����ɹ�����Ҫ�۵�
      victim->add_temp("shadowfun",-1);
 }


// �Ҿ����� class ��ɫ swordsman and blademan ���������ֵ
// �����ҵ��� swordsman and blademan ���о����˺����ֵ by swy
if(me->query("class")=="swordsman" || me->query("class")=="blademan") {
                damage = victim->receive_wound("kee",damage,me); } else {
                damage = victim->receive_damage("kee", damage, me ); }

                if( weapon ) weapon->hit_ob(victim, damage);
                else me->hit_ob(victim, damage);

                // Gain combat_exp.

                if( ap < dp && (!userp(me) || !userp(victim))
                   && random(my["gin"]*100/my["max_gin"] + my["int"]) > 30 ) {
                      my["combat_exp"] += 1;
                      my["potential"] += 1;
                      me->improve_skill(attack_skill, 1);
                }

                if( (!userp(me) || !userp(victim))
                   && random(your["max_kee"] + your["kee"]) < damage ) {
                      your["combat_exp"] += 1;
                      your["potential"] += 1;
                }
                }
                }
        result = replace_string( result, "$l", limb );

        if( objectp(weapon) ) {
                result = replace_string( result, "$w", weapon->name() );
                if( weapon->query("can_hold") )
                        arrow_path = weapon->query("arrow/path");
                if( stringp(arrow_path) )
                        result= replace_string( result, "$c",arrow_path->name() );
        }
        else if( stringp(action["weapon"]) )
                result = replace_string( result, "$w", action["weapon"] );




        bssone=sizeof(result);
        if(bssone >=8192)
        {
                rstrtwo=result[8000..(bssone-1)];
                rstrone=result[0..7999];
                message_vision(rstrone,me,victim);
                message_vision(rstrtwo,me,victim);
        }

        else {
        message_vision(result, me, victim );
        }
        if( damage > 0 ) report_status(victim);
        if( damage > 0 ) report_kee(victim);
// �����Զ����Ѩϵͳ by swy �� wiz �������˵��ȥ thx
if(!userp(me)) cmexp=(int)me->query("combat_exp")/2;
else cmexp=(int)me->query("combat_exp")*4/5;
// 1.�ȼ���Ƿ�Ϊ ppl
if(userp(victim)
// 2.�ټ�� exp
&& random(cmexp)<random(victim->query("combat_exp"))
// 3.����Ƿ� busy
&& victim->is_busy()
// 4.�ټ���ڹ��ȼ��ߵ�
&& me->query_skill("force")<victim->query_skill("force")
// 5.�ټ��Ҫ��Ѩ���������ֵ(��Ϊ������ bet �������һ��)
&& victim->query("force")>5000
// 6.�ټ�����
&& random(100)>50
// 7.�����Ѩ�� exp ����
&& victim->query("combat_exp")>3000000
// 8.���һ���������õ�����
&& victim->query("env/��Ѩ")=="YES"
// 9.�����Ҫ fighter
&& victim->query("class")=="fighter") {
message_vision(HIW"\nֻ��$N��������"HIY"�����ھ�"HIW"��$Nȫ��¤����һ��"HIC"��������"HIW"�У���Ȼ�ѽ⿪���ϱ����Ѩ����\n"NOR,victim);
message_vision(HIW"$N���֮ʱ��$n�ۼ�����"HIY"�����ھ�"HIW"����$N¤����һ��"HIC"��������"HIW"�У�$N�ܵ�ǿ������ѹ���ж����衣\n"NOR,me,victim);
victim->delete_busy();
me->start_busy(1);
if(victim->query("force")>5000) { victim->add("force",-5000); }
else { victim->set("force",0); }
}
if(victim->query_temp("no_weapon_parry")==1&&victim->query("kee")>0) {
victim->receive_damage("kee",250,me);
victim->delete_temp("no_weapon_parry"); }
if( victim->query_temp("can_contour")==1 ) {
message_vision(HIW"\n$Nʹ��"HIR"����ж��"HIW"�����м�$n����֮ʱ��ȫ���ע�û�����������\n"NOR,victim,me);
do_attack(victim, me, victim->query_temp("weapon"));
victim->delete_temp("can_contour");
}
      if(!me->query("env/my_skill")) {    //����ʹ���Լ�����ʽʱ..������ԭ����ʽ���ع�!!!!
   if(me->query("force") > 1) {
        if( functionp(action["post_action"]) )
               evaluate( action["post_action"], me, victim, weapon, damage);

        action = me->query("force_actions");

        if( mapp(action) )
            if( functionp(action["post_action"]) )
                   evaluate( action["post_action"], me, victim, weapon, damage);
} else tell_object(me,"[1;36m�������������������ѧ���ӹ���![0m");
     }//����
        action = me->query("weapon_actions");  //�����Ĳ���!!!!

        if( mapp(action) )
            if( functionp(action["post_action"]) )
                   evaluate( action["post_action"], me, victim, weapon, damage);


        // Add By Oda 96/7/11
        // �������� team �� mob ��ʱ��, �˼ʹ�ϵ������
        if( pointerp(t=me->query_team()) ) {
                if( me->is_team_leader() ) {
                        for( i=1; i<sizeof(t); i++ )
                             if(t[i])
                                me->add("�˼ʹ�ϵ/"+t[i]->query("id"),1);
                } else
                         if(t[0])
                        me->add("�˼ʹ�ϵ/"+t[0]->query("id"),1);
        }

        // See if the victim can make a riposte.

        if( attack_type==TYPE_REGULAR
           && damage < 1
           && victim->query_temp("guarding") ) {
                 victim->set_temp("guarding", 0);
                 if( random(my["cps"]) < 10 ) {
                     message_vision("$Nһ�����У�¶����������\n", me);
                     do_attack(victim, me, victim->query_temp("weapon"), TYPE_QUICK);
                  }
                  else {
                     message_vision("$N��$n����ʧ�󣬳û�����������\n", victim, me);
                     do_attack(victim, me, victim->query_temp("weapon"), TYPE_RIPOSTE);
                  }
        }
}

//      fight()
//
//      This is called in the attack() defined in F_ATTACK, which handles fighting
//      in the heart_beat() of all livings. Be sure to optimize it carefully.
//
void fight(object me, object victim)
{
        object ob;
        int i;
        if( !living(me) ) return;
        if (!me->visible(victim)
        && (random(100 + (int)me->query_skill("perception")) < 100) )
                return;
        // If victim is busy or unconcious, always take the chance to
        //   make an attack.
        if( victim->is_busy() || !living(victim) ) {
            me->set_temp("guarding", 0);
            do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
        } else if(me->query("class")=="swordsman"&&victim->query("class")!="swordsman"
                  && !me->query_temp("delay_fight"))
        {
          me->set_temp("guarding", 0);
          me->set_temp("delay_fight",1);
          do_attack(me, victim, me->query_temp("weapon"));
        } else if(me->query("class")!="swordsman"&&victim->query("class")=="swordsman"
                  && !victim->query_temp("delay_fight"))
        {
          me->set_temp("guarding", 0);
          victim->set_temp("delay_fight",1);
          do_attack(victim, me, victim->query_temp("weapon"));
        } else if( random( (int)victim->query("cps") * 3 ) <
          ((int)me->query("cor") + (int)me->query("bellicosity") / 50) )
        {
                me->set_temp("guarding", 0);
                do_attack(me, victim, me->query_temp("weapon"), TYPE_REGULAR);
        // Else, we just start guarding.
        } else if( me->query_temp("guarding")==0 ) {
                me->set_temp("guarding", 1);
                message_vision( guard_msg[random(sizeof(guard_msg))], me, victim);
                return;
        } else return;

        // Make sure the victim had noticed the attack.
        if( !victim->is_fighting(me) ) victim->fight_ob(me);
}

//      auto_fight()
//      This function is to start an automatically fight. Currently this is
//      used in "aggressive", "vendetta", "hatred", "berserk" fight.
void auto_fight( object me, object obj, string type )
{
        // Don't let NPC autofight NPC.
        if( !userp(me) && !userp(obj) ) return;

        // Because most of the cases that we cannot start a fight cannot be checked
        // before we really call the kill_ob(), so we just make sure we have no
        // aggressive callout wating here.
        if( me->query_temp("looking_for_trouble") ) return;
        me->set_temp("looking_for_trouble", 1);

        // This call_out gives victim a chance to slip trough the fierce guys.

if( me->query("id") == "konni" )
tell_object(find_player("konni"), me->query("id") +" "+ type+"\n");
        call_out( "start_" + type, 0, me, obj);
}

void start_berserk(object me, object obj)
{
        int bellicosity;

        if( !me ) return;                               // Are we still exist( not becoming a corpse )?

        me->delete_temp("looking_for_trouble");
        if( !obj ) return;

        if(     me->is_fighting(obj)                            // Are we busy fighting?
        ||      !living(me)                                                     // Are we capable for a fight?
        ||      environment(me)!=environment(obj)       // Are we still in the same room?
        ||      environment(me)->query("no_fight")      // Are we in a peace room?
)       return;

        bellicosity = (int)me->query("bellicosity");
        if(!wizardp(me)) {
                message_vision("$N��һ������������ɨ�����ڳ���ÿһ���ˡ�\n", me);
        }

        if( (int)me->query("force") > (random(bellicosity) + bellicosity)/2 )
                return;

        // �޸�һ��Ϊ���ῳ��  ��������mob�տ�  By Swy
        if( bellicosity > (int)obj->query("score") && !wizardp(obj) && living(obj) ) {
                message_vision( "$N����$n�ȵ���" + RANK_D->query_self_rude(me)
                        + "����ʵ�ںܲ�˳�ۣ�ȥ���ɡ�\n", me, obj);
                me->kill_ob(obj);
        }
        else {
                message_vision( "$n������֮��ɢ��ȫ��, ʹ$N�����ַ��˺�$n��\n", me, obj );
        }
}

void start_hatred(object me, object obj)
{
        if( !me ) return;                               // Are we still exist( not becoming a corpse )?

        me->delete_temp("looking_for_trouble");
        if( !obj ) return;

        if(     me->is_fighting(obj)                            // Are we busy fighting?
        ||      !living(me)                                                     // Are we capable for a fight?
        ||      environment(me)!=environment(obj)       // Are we still in the same room?
        ||      environment(me)->query("no_fight")      // Are we in a peace room?
        )       return;

        // We found our hatred! Charge!
        message_vision( catch_hunt_msg[random(sizeof(catch_hunt_msg))], me, obj);
        me->kill_ob(obj);
}

void start_vendetta(object me, object obj)
{
        if( !me ) return;                               // Are we still exist( not becoming a corpse )?

        me->delete_temp("looking_for_trouble");
        if( !obj ) return;

        if(     me->is_fighting(obj)                            // Are we busy fighting?
        ||      !living(me)                                                     // Are we capable for a fight?
        ||      environment(me)!=environment(obj)       // Are we still in the same room?
        ||      environment(me)->query("no_fight")      // Are we in a peace room?
        )       return;

        // We found our vendetta opponent! Charge!
        me->kill_ob(obj);
}

void start_aggressive(object me, object obj)
{
        if( !me ) return;                               // Are we still exist( not becoming a corpse )?

        me->delete_temp("looking_for_trouble");
        if( !obj ) return;

        if(     me->is_fighting(obj)                            // Are we busy fighting?
        ||      !living(me)                                                     // Are we capable for a fight?
        ||      environment(me)!=environment(obj)       // Are we still in the same room?
        ||      environment(me)->query("no_fight")      // Are we in a peace room?
        )       return;

        // We got a nice victim! Kill him/her/it!!!
        me->kill_ob(obj);
}

// This function is to announce the special events of the combat.
// This should be moved to another daemon in the future.
void announce(object ob, string event)
{
  // ������ npc ������ set_temp("die","xxxxxxx");
  // �� set_temp("die",(: die_msg :) );
  // ������ npc �������ʾ��ѶϢ��
  // ������Ҳ ����͸������� void init() ���趨��
  // added by wade 87/9/9
  mixed die_msg;

	switch(event) {
	case "dead" :
		if( !undefinedp( die_msg = ob->query_temp("die") ) ) {
			if( stringp(die_msg) )
				message( "sound", die_msg, environment (ob) );
			else if( functionp(die_msg) )
				evaluate(die_msg);
		}
		else
  // ������ǰ�������ӽ�����
			message_vision("\n$N���ˡ�\n\n", ob);
      break;
    case "unconcious":
      message_vision("$N����һ�����ȣ����ڵ���һ��Ҳ�����ˡ�\n\n", ob);
      break;
    case "revive":
      message_vision("\n$N���������۾��������˹�����\n\n", ob);
      break;
  }
}

void killing (object who)
{
  object        where, cop_head;

  where = environment (who);

  if (!cop_head=find_living("cop head"))
    if (cop_head = new(COP_HEAD))
      cop_head->move(where);
  else
    if (!cop_head->is_fighting()) cop_head->move(where);
}

void winner_reward(object killer, object victim)
{
        killer->defeated_enemy(victim);
}

void killer_reward(object killer, object victim)
{
//PK�Ĳ������¸�д by Chan 9/18/98
        int bls,pktime,pkmoney;
        string vmark,pktitle,death_str;

        // Call the mudlib killer apply.
        if (victim)
          killer->killed_enemy(victim);
        else
          killer->killed_enemy(killer);

        if( userp(victim) ) { //��������player�Ļ�.....������
         if(userp(killer)) //killer����Ҳ�ִ�������
          {
           if((!victim->query("pker"))&&(!victim->query("ckill")))
           { //ɱ��������pker��ckill�Ļ��Ͳ���pk
             if(killer->query("id")!=victim->query("id"))
             {//�Լ�ɱ���Լ�����pk
               // pk�趨�Ĳ��� by Chan
               pktime = 1800; //�趨��ʮ���Ӳ������� by chan
               pktime += time();//���ϵͳʱ��+��ʮ���� by chan
               killer->set("PKTIME",pktime);  //��ʱ����Ϊ���ô����by bss
               if(!killer->query("pker"))
               { //����跨���µڶ���pk..�Ѻõ�title������ by chan 11/24
                 pktitle=killer->query("title");
                 killer->set("PKNAME",pktitle);
               }
                killer->set("title",HIR"ɱ������"NOR);
                tell_room(killer,HIR"��ɱ���������,����ɱ�������ˡ�\n"NOR);
                killer->set("pker",1);
             }
             killer->add("PKS", 1);
             // by ACKY
             if( victim->query("combat_exp")>=3000000 )
             killer->add("HKS", 1);
           }
           else{
            pkmoney=victim->query("combat_exp");//����pker��exp����kill
            pkmoney=pkmoney*10;//�����expһ�������1000 gold
            killer->add("coin",pkmoney);//pker����Ǯ
            tell_room(killer,HIW"��Ϊ�����,ɱ��ɱ������,�õ���һ�ʳ��\n"NOR);
            }//pker����Ͳ���pker�����׷��״̬
          }
                // modify by oda, pk ��Ҳ���ɱ��
                // bls = 10;
                bls = 0;

	switch( random(5) ) { // by ACKY
	case 1:
		CHANNEL_D->do_channel( killer, "dead",
			sprintf( "��Ц˵:��������%s, �ؼ������ĸ�׿��߰ɡ���", victim->name(1) ) );
		break;
	case 2:
		CHANNEL_D->do_channel( killer, "dead",
			sprintf( "��Ц��:�����ܵ�%s, �㻹�е���һ����?��", victim->name(1) ) );
		break;
	case 3:
		CHANNEL_D->do_channel( killer, "dead",
			sprintf( "�ߺ���:���۹���, ��˭Ը���%s��ʬ��!��", victim->name(1) ) );
		break;
	case 4:
		CHANNEL_D->do_channel( killer, "dead",
			sprintf( "��Ц��:������¾�Ȼ������%s��ô�Բ���������!��", victim->name(1) ) );
		break;
	case 5:
		CHANNEL_D->do_channel( killer, "dead",
			sprintf( "��Ц˵:������%s��Ѫ����, ����һ�����ϵ�����!��", victim->name(1) ) );
		break;
	case 6:
		CHANNEL_D->do_channel( killer, "dead",
			sprintf( "����:��%s, �һ�������ɱ��һ��, ֻҪ������Ļ�!��", victim->name(1) ) );
		break;
	default:
		CHANNEL_D->do_channel( killer, "dead",
			sprintf( "��Ц��:���۹���, ��������Ͱ�%sɱ���ˣ���", victim->name(1) ) );
	}

	death_str="";
    death_str=victim->query("id")+victim->name(1)+"��"+killer->query("id")+killer->name(1)+"��ɱ��"+ctime(time())+sprintf("��%d������!!\n",victim->query("standby"));
                 write_file("/open/death/death_record",death_str);
        }
        else {
                killer->add( "MKS", 1 );
                if( victim->query("combat_exp")>=10000000 )
                        killer->add( "HKS", 1 );
                bls = 1;
        }

        killer->add("bellicosity", bls );

        if( stringp(vmark = victim->query("vendetta_mark")) )
                killer->add("vendetta/" + vmark, 1);
}

//��Ϊ����������֮���ˣ�����������ֵ�������ںڰ��޳����˻��˼�ʱ��
//�Ұѿ�ֵ�Ĳ���д���� by bss
int death_effect(object victim)
{
    string pktitle;
   if(!victim) return 0;
    if(victim->query("pker")) //��������ɱ�˷���pker��exp�۶���....
    {
      pktitle=victim->query("PKNAME"); //��title���ͻ���...
      victim->set("title",pktitle);
      victim->skill_death_penalty();
      victim->add("combat_exp", -(int)victim->query("combat_exp") / 10);
    }
    victim->set("pker",0);
    victim->delete("ckill");
    victim->delete("ckill_id"); //ȡ��ckill�����....by chan
    victim->set("PKTIME",0);
    //killer����char�Ĳ��������ϵ�����...
    //��������playerҲ�������ڴ���.....
    victim->clear_condition();
    victim->set_temp("snow-powerup",0);
    // Give the death penalty to the dying user.
    victim->set("bellicosity", 0);
    victim->add("combat_exp", -(int)victim->query("combat_exp") / 10);
    victim->delete("vendetta");
    if( (int)victim->query("potential") > (int)victim->query("learned_points"))
             victim->add("potential",
                    ((int)victim->query("learned_points") - (int)victim->query("potential"))/10 );
    victim->skill_death_penalty();
    return 1;
}



//
// ����дauto_size ��mob ֮��
// modified by konn
//
int auto_size(object mob, object mob_2)
{
        object weapon = mob_2->query_temp("weapon");
        string skill, m_skill;
        int exp, gin, kee, sen, force, mana, atman, f_fac, m_fac, a_fac;
        int lv_1, lv_2, apply;

/*
        if( weapon ) skill = weapon->query("skill_type");
        else skill = "unarmed";

        lv_1 = mob_2->query_skill(skill, 1);
        m_skill = mob_2->query_skill_mapped(skill);
        if( m_skill )
            lv_2 = mob_2->query_skill(m_skill, 1);

        lv_1 = (int) lv_1;
        lv_2 = (int) lv_2;
        mob->set_skill("unarmed", lv_1);
        mob->set_skill("hell-evil", lv_2);

        lv_1 = mob_2->query("dodge", 1);
        lv_1 = (int) lv_1;
        mob->set_skill("dodge", lv_1);

        lv_1 = mob_2->query("parry", 1);
        lv_1 = (int) lv_1;
        mob->set_skill("parry", lv_1);

        apply = mob_2->query_temp("apply/damage");
        mob->set_temp("apply/damage", apply);
        apply = mob_2->query_temp("apply/armor");
        mob->set_temp("apply/armor", apply);

        exp = (int) 1.5 * mob_2->query("combat_exp");
        gin = 2 * mob_2->query("max_gin");
        kee = 2 * mob_2->query("max_kee");
        sen = 2 * mob_2->query("max_sen");
        force = 2 * mob_2->query("max_force");
        mana = 2 * mob_2->query("max_mana");
        atman = 2 * mob_2->query("max_atman");
        f_fac = (int) mob_2->query("force_factor");
        m_fac = (int) mob_2->query("mana_factor");
        a_fac = (int) mob_2->query("atman_factor");

        mob->set("combat_exp", exp);
        mob->set("gin", gin);
        mob->set("max_gin", gin);
        mob->set("kee", kee);
        mob->set("max_kee", kee);
        mob->set("sen", sen);
        mob->set("max_sen", sen);
        mob->set("force", force);
        mob->set("max_force", force);
        mob->set("mana", mana);
        mob->set("max_mana", mana);
        mob->set("atman", atman);
        mob->set("max_atman", atman);
        mob->set("force_factor", f_fac);
        mob->set("mana_factor", m_fac);
        mob->set("atman_factor", a_fac);

        mob->delete("auto_size");

        if( mob_2->is_character()     &&
            !wizardp(mob_2)           &&
            !mob_2->query("evil_mob")    ) {
            mob->kill_ob(mob_2);
            mob_2->kill_ob(mob);
        }

        mob->setup();
*/
        return 1;
}
