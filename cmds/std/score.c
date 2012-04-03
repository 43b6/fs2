// score.c
// Modify By Spirits.
// Modified by wade 1/10/1996
// Modified by Anmy 98/4/2
// Modified by Chan 98/8/17
inherit F_CLEAN_UP;

#include <ansi.h>
#include <combat.h>

string state( int value, int max );
string status_color( int value, int max );
string status_string( int status );

void create() { seteuid(ROOT_UID); }

void wiz_score(object ob)
{
  mapping my;
  string skill_type, couples,attack_skill,skill_map;
  object weapon;
  int attack_points, dodge_points, parry_points,damage,damage_bonus,power_dam,damage_1,damage1,damage2,damage_2;
  my = ob->query_entire_dbase();
  if( objectp(weapon = ob->query_temp("weapon")) )
  if(present(weapon, ob))
  skill_type = weapon->query("skill_type");
  else {
  weapon = 0;
  ob->delete_temp("weapon");
  skill_type = "unarmed";
  } else skill_type = "unarmed";
  attack_points = COMBAT_D->skill_power(ob, skill_type, SKILL_USAGE_ATTACK);
  parry_points = COMBAT_D->skill_power(ob, "dodge", SKILL_USAGE_OTHER);
  dodge_points = COMBAT_D->skill_power(ob, "dodge", SKILL_USAGE_DEFENSE);
// �˺������� by swy
if( objectp(weapon) )  {
attack_skill = weapon->query("skill_type");
damage = (int) ob->query_temp("apply/damage");
if( damage > 500 ) damage = 500;
} else damage = 0;
skill_map = ob->query_skill_mapped(attack_skill);
if(userp(ob)) {
damage += (int)ob->query_skill(attack_skill, 1)*2+(int)ob->query_skill("force", 1);
if( ob->query_skill(skill_map, 1) != 0 )
damage += ob->query_skill(skill_map, 1)*3;
else damage = damage; } else {
damage += (int)ob->query_skill(attack_skill, 1)*2+(int)ob->query_skill("force", 1);
if( ob->query_skill(skill_map, 1) != 0 )
damage += ob->query_skill(skill_map, 1)*2;
else damage = damage; }
// ���� skills ��� damage by swy
if( my["class"]=="fighter" ) {
damage += 500; }
else if(my["class"]=="swordsman"||my["class"]=="blademan"||my["class"]=="bandit") {
damage += 400; }
else if(my["class"]=="scholar"||my["class"]=="prayer"||my["class"]=="bonze"||
        my["class"]=="beggar"||my["class"]=="officer"||my["class"]=="marksman") {
damage += 300; }
else if(my["class"]=="killer"||my["class"]=="poisoner"||my["class"]=="doctor"||
        my["class"]=="taoist") {
damage += 100; }
else if(my["class"]=="dancer") {
damage += 200; } else {
damage += 50; }
// �����˺��� by swy
damage_bonus = my["str"];
if( my["class"]=="fighter" ) {
damage2 = 500; }
else if(my["class"]=="swordsman"||my["class"]=="blademan"||my["class"]=="bandit") {
damage2 = 400; }
else if(my["class"]=="scholar"||my["class"]=="prayer"||my["class"]=="bonze"||
        my["class"]=="beggar"||my["class"]=="officer"||my["class"]=="marksman") {
damage2 = 300; }
else if(my["class"]=="killer"||my["class"]=="poisoner"||my["class"]=="doctor"||
        my["class"]=="taoist") {
damage2 = 100; }
else if(my["class"]=="dancer") {
damage2 = 200; } else {
damage2 = 50; }
damage_bonus+=(int)(my["force_factor"]*damage2*0.2);
// ���˴�����Ե�����ֵ by swy
power_dam = my["max_force"];
damage_1 = (int)(power_dam / 10);
// ���˺��� by swy
damage1 = damage+damage_bonus+(attack_points/100);
// �ܵ���ֵ by swy
damage_2 = damage_1+(dodge_points/100)+(parry_points/100);

 printf(BOLD "%s" NOR "%s\n" +
         "�� ���գ�%s\n�� ���䣺%s��\t�Ա�%s\n",
      RANK_D->query_rank(ob),
      ob->short(),
      CHINESE_D->chinese_date((my["birthday"] - 14*365*24*60) * 60),
      chinese_number(my["age"]),
      my["gender"]
    );
	if (couples = my["couples/name"])
		printf ("\t��ż��: %O��\n", couples);

	printf( "�� �ܹ�ɱ�� "HIY"%d"NOR" ����, "HIR"%d"NOR" λ���, ������ "HIM"%d"NOR" λ���֡�\n",
	my["MKS"] + my["PKS"], my["PKS"], my["HKS"] );
	printf("�� ս��: "HIY"%6d"NOR"\n",my["war_score"]);
  printf("�� ״����%s[0m\n",status_string(my["status"]));

  if( mapp(my["family"]) ) {
    if( my["family"]["master_name"] )
        printf("�� ʦ���� "HIW"%s"NOR"��\n",
                my["family"]["master_name"]
      );
  }
  if(my["clan"])
  {
printf("�� �������ɣ�"+HIY+"%s\n"NOR,my["clan"]["name"]);
    if(my["clan"]["title"])
      printf("�� ����ְλ��"+HIC+"%s\n\n"NOR,my["clan"]["title"]);
  }
  if(my["max_s_kee"])
    printf("�� �������� %s ����"+ HIG+"%d/%d\n" NOR,
        to_chinese(my["sec_kee"]),
        my["s_kee"], my["max_s_kee"]);

  if(my["class"] && my["class"]=="officer")
  {
    printf("�� ��λ����"HIW"%s"NOR"��\tȨ����"HIY"%d/%d\n"NOR
                  "\t���ξ��飺"HIC"%d\n"NOR,
        my["officer_class"],
        my["officer_power"],
        my["max_officer_power"],
        my["office_exp"]
    );
  }

	printf(
		"�� ����[str]: %2d   ��ʶ[cor]: %2d   ����[int]: %2d   ����[spi]: %2d\n"+
	      	"�� ����[cps]: %2d   ��ò[per]: %2d   ����[con]: %2d   ��Ե[kar]: %2d\n\n",
      			my["str"], my["cor"], my["int"], my["spi"],
      			my["cps"], my["per"], my["con"], my["kar"]
    	);
	printf("�� ����%s%4d/%d\t%s(%d%%)"NOR
                 "\t������%s%4d/%d\t(+%d)"NOR
               "\t\tʳ�%s%4d/%d\n"NOR,
    status_color(my["gin"], my["eff_gin"]), my["gin"], my["eff_gin"],
    status_color(my["eff_gin"], my["max_gin"]),
    my["eff_gin"] * 100 / my["max_gin"],
    status_color(my["atman"], my["max_atman"]), my["atman"], my["max_atman"],
    my["atman_factor"],
    status_color(my["food"], ob->max_food_capacity()),
    my["food"],
    ob->max_food_capacity()
  );

  printf("�� ����%s%4d/%d\t%s(%d%%)" NOR
                 "\t������%s%4d/%d\t(+%d)" NOR
               "\t\t��ˮ��%s%4d/%d\n"NOR,
    status_color(my["kee"], my["eff_kee"]), my["kee"], my["eff_kee"],
    status_color(my["eff_kee"], my["max_kee"]),
    my["eff_kee"] * 100 / my["max_kee"],
    status_color(my["force"], my["max_force"]), my["force"], my["max_force"],
    my["force_factor"],
    status_color(my["water"], ob->max_water_capacity()),
    my["water"],
    ob->max_water_capacity()
  );
  printf("�� ��%s%4d/%d\t%s(%d%%)"NOR
                 "\t������%s%4d/%d\t(+%d)\n\n" NOR,
    status_color(my["sen"], my["eff_sen"]),  my["sen"], my["eff_sen"],
    status_color(my["eff_sen"], my["max_sen"]),
    my["eff_sen"] * 100 / my["max_sen"],
    status_color(my["mana"], my["max_mana"]), my["mana"], my["max_mana"],
    my["mana_factor"] );

  printf("�� ս����������"HIW"%O(+%O)"NOR
                   "\tս����������"HIW"%O(+%O)\n" NOR,
 attack_points+1,
    (int)ob->query_temp("apply/damage"),
 (dodge_points + (weapon? parry_points: (parry_points/10)))+1,
    (int)ob->query_temp("apply/armor")
  );
printf("�� ��ѧ�˺�����"HIW"%d"NOR"\t�����˺�����"HIW"%d"NOR"\t�ܺ��˺�����"HIW"%d\n"NOR,
damage,damage_bonus,damage1);
printf("�� ��������ֵ��"HIW"%d"NOR"\t�ܵ���ֵ��"HIW"%d\n"NOR,
damage_1,damage_2);
  printf("�� ɱ      ����"RED"%O"NOR
                   "\tǱ      �ܣ�"HIY"%O(%O%%)" NOR
                     "\tʵս���飺"HIM"%O\n" NOR,
                my["bellicosity"],
                my["potential"] - my["learned_points"],
                (int)(1 + my["learned_points"]) * 100 /
                 (1 + my["potential"]),
                my["combat_exp"]);
}

void player_score(object ob)
{
	mapping my;
	string skill_type, couples;
	object weapon;
	int attack_points, dodge_points, parry_points;

	my = ob->query_entire_dbase();

	printf(BOLD "%s" NOR "%s\n" +
	"�� ���գ�%s\n�� ���䣺%s��\t�Ա�%s",
	RANK_D->query_rank(ob),
	ob->short(),
	CHINESE_D->chinese_date((my["birthday"] - 14*365*24*60) * 60),
	chinese_number(my["age"]),
	my["gender"]
	);
	if (couples = my["couples/name"])
		printf ("\t��ż��: %O��\n", couples);
	else
		printf ("��\n");

	printf( "�� �ܹ�ɱ�� "HIC"%d"NOR" ����, "HIR"%d"NOR" λ���, ������ "HIM"%d"NOR" λ���֡�\n",
	my["MKS"] + my["PKS"], my["PKS"], my["HKS"] );
	if( my["war_score"] )
		printf( "�� ս��: "HIY"%d"NOR" ��\n", my["war_score"] );
	printf("�� ״����%s[0m\n",status_string(my["status"]));

  if( mapp(my["family"]) ) {
    if( my["family"]["master_name"] )
        printf("�� ʦ���� "HIW"%s"NOR"��\n",
                my["family"]["master_name"]
      );
  }

	if(my["clan"]) {
		printf( "\n�� ��������: "+HIY+"%s\n"NOR  , my["clan"]["name" ] );
		if(my["clan"]["title"])
			printf(   "�� ����ְλ: "+HIC+"%s\n\n"NOR, my["clan"]["title"] );
	}

	if(my["max_s_kee"])
		printf("�� ������ %s ��: "+ HIG+"%d/%d\n" NOR,
			to_chinese(my["sec_kee"]), my["s_kee"], my["max_s_kee"]);

  if(my["class"] && my["class"]=="officer")
  {
   printf("�� ��λ:��"HIW"%s"NOR"�� Ȩ�� %d/%d  �� ���ξ���: "HIC"%d\n"NOR,
        my["officer_class"],
        my["officer_power"],my["max_officer_power"],
        my["office_exp"]
    );
  }

	printf(
		"�� ����[str]: %2d   ��ʶ[cor]: %2d   ����[int]: %2d   ����[spi]: %2d\n"+
	      	"�� ����[cps]: %2d   ��ò[per]: %2d   ����[con]: %2d   ��Ե[kar]: %2d\n\n",
      			my["str"], my["cor"], my["int"], my["spi"],
      			my["cps"], my["per"], my["con"], my["kar"]
    	);
	printf("�� ��: %s%s%-6s%s  ����: %s%-5s  ����ֵ: "HIM"%-12d"NOR" ʳ��: %s  ��ˮ: %s\n"NOR,
    state( my["gin"], my["eff_gin"] ),
    status_color(my["eff_gin"], my["max_gin"]),
    "("+my["eff_gin"] * 100 / my["max_gin"]+"%)",NOR,
    state (my["atman"], my["max_atman"]),
    "("+my["atman_factor"]+")",
    my["combat_exp"],
    state(my["food"], ob->max_food_capacity()),
    state (my["water"], ob->max_water_capacity())
  );

  printf("�� ��: %s%s%-6s%s  ����: %s%-5s  Ǳ  ��: %-12s "HIR"ɱ��"NOR" %-5d"HIR" �ж�"NOR" %s\n",
    state (my["kee"], my["eff_kee"]),
    status_color(my["eff_kee"], my["max_kee"]),
    "("+my["eff_kee"] * 100 / my["max_kee"]+"%)",NOR,
    state (my["force"], my["max_force"]),
    "("+my["force_factor"]+")",
    my["potential"] - my["learned_points"]+"("+
    (int)(1+(int)my["learned_points"])*100 / (1+(int)my["potential"])+"%)",
    my["bellicosity"],
    ob->query_condition()?":~~(":NOR":-)",
  );

  if( objectp(weapon = ob->query_temp("weapon")) )
    if (present(weapon, ob))
      skill_type = weapon->query("skill_type");
    else {
        weapon = 0;
        ob->delete_temp("weapon");
        skill_type = "unarmed";
    }
  else
    skill_type = "unarmed";

  attack_points = COMBAT_D->skill_power(ob, skill_type, SKILL_USAGE_ATTACK);
  parry_points = COMBAT_D->skill_power(ob, "dodge", SKILL_USAGE_OTHER);
  dodge_points = COMBAT_D->skill_power(ob, "dodge", SKILL_USAGE_DEFENSE);

  printf("�� ��: %s%s%-6s%s  ����: %s%-5s \n\n",
    state( my["sen"], my["eff_sen"] ),
    status_color( my["eff_sen"], my["max_sen"] ),
    "("+my["eff_sen"] * 100 / my["max_sen"]+"%)",NOR,
    state (my["mana"], my["max_mana"]),
 "("+my["mana_factor"]+")");

  printf(HIY"��ս����������: "HIW"%O("HIC"+%O"HIW")\n"NOR
         HIY"��ս����������: "HIW"%O("HIG"+%O"HIW")\n" NOR,
 attack_points+1,
    (int)ob->query_temp("apply/damage"),
 (dodge_points + (weapon? parry_points: (parry_points/10)))+1,
    (int)ob->query_temp("apply/armor")
);
}

// by babe
string status_color( int value, int max )
{
	int	ratio;

	if( max )
		ratio = value * 100 / max;
	else
		ratio = 100;

	if     ( ratio > 100 ) return HIC;
	else if( ratio ==100 ) return HIW;
        else if( ratio >= 90 ) return HIG;
        else if( ratio >= 80 ) return GRN;
        else if( ratio >= 60 ) return HIY;
        else if( ratio >= 40 ) return YEL;
        else if( ratio >= 20 ) return HIR;
	else		       return RED;
}

// by babe
string state( int value, int max )
{
	int	ratio;
	string	msg;

	if( max==0 )
		return HIR+"._.??"+NOR;

	ratio  = value * 100 / max;
	if     ( ratio > 100 ) msg = HIC + "*_* ";
	else if( ratio ==100 ) msg = HIW + "^O^ ";
        else if( ratio >= 90 ) msg = HIG + "^o^ ";
        else if( ratio >= 80 ) msg = GRN + "^_^ ";
	else if( ratio >= 60 ) msg = HIY + "-.- ";
	else if( ratio >= 40 ) msg = YEL + "-_-\"";
	else if( ratio >= 20 ) msg = HIR + "!_! ";
	else		       msg = RED + ">_< ";

	return msg + NOR;
}

string status_string(int status)
{
        string *status_desc=({
        "[1m���������״�����ã���������˻�����",
        "[1;36m������е�ͷ�Σ�����ûʲô�󰭡�",
        "[1;33m��е����������꣬��ǰ�����ʵĿ������С�",
        "[1;32m�㿪ʼ���ö��ģ��������ѣ�д�����",
        "[1;35m�����ͷʹ���ѣ������Ҹ��ط���������Ϣ��",
        "[1;31m�����������ת, �ƺ���Ҫ�ε��ˡ�"
        });
        if( status >= 1000 )    status=999;
        if( status < 0 )        status=0;
        if( status < 400 )
                return status_desc[0];
        else
                return status_desc[(status-400)/100];
}

varargs int main( object me, string arg, int mode )
{
	object	ob;

	seteuid(getuid(me));

	if( !arg )
		ob = me;
	else if( wizardp(me) ) {
		arg = lower_case(arg);
		ob = present( arg, environment(me) );
		if( !ob )
			ob = find_player(arg);
		if( !ob )
			ob = find_living(arg);
        if( !ob )
            ob = FINGER_D->acquire_login_ob(arg);
		if( !ob )
			return notify_fail("��Ҫ�쿴˭��״̬?\n");
	}
	else
		return notify_fail("ֻ����ʦ�ܲ쿴���˵�״̬��\n");

	if( mode==1 )
		ob = me->query_temp("pal");

	if( wizardp(me) )
		wiz_score(ob);
	else
		player_score(ob);

	return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : score
           score <��������>                   (��ʦר��)
ָ��˵�� :
           ���ָ�������ʾ��(��)��ָ������(������)�Ļ������ϡ�
           �������ϵ��趨����� 'help setup'��
�����ο� :
           hp
HELP
    );
    return 1;
}
