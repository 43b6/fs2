//conditiond.c CON_D ��ʾ״̬ by ACKY

#include <ansi.h>

string con_query( object ob )
{
	string condition;

	condition = "";

// ��ѧ
    if( ob->query_temp("losehurt") )
		condition += HIR"��Ѫ��������";
	if( ob->query_condition("giftout") )
        	condition += HIG"������쳣��";
	if( ob->query_condition("mkpowerup") )
        	condition += HIW"����Ѫ�񱩡�";
	if( ob->query_temp("addenforce") )
        	condition += HIR"��Ѫ����";
	if( ob->query_condition("powerup") )
		condition += HIW"(��˪�澢)";
        if( ob->query_condition("god_out") )
		condition += HIM"(���ƻ���)";

// ����, �ж�

	if( ob->query_condition("dark_poison")      || ob->query_condition("fire_poison")   ||
        	ob->query_condition("five_poison")  || ob->query_condition("flower_poison") ||
        	ob->query_condition("snake_poison") || ob->query_condition("rose_poison")   ||
        	ob->query_condition("spring")       || ob->query_condition("super_snake_poison") )
	condition += HIM"(�ж�)";
	if( ob->query_condition("lyssa") )
		condition += HIR"(��Ȯ��)";
        if( ob->query_condition("mogi") )
		condition += HIM"(����)";
	if( ob->query_condition("ff_poison") )
        condition += HIY"(��Ѫʧ��)";
	if( ob->query_condition("blockade") )
         condition += HIW"(Ѩ������)";
        if( ob->query_condition("skyfire") )
		condition += NOR"("HIR"��"HIY"��"HIR"��"HIY"��"NOR")";
        if( ob->query_condition("tsunami") )
                condition += NOR"("HIB"��"HIY"Ϣ"HIB"��"HIC"��"NOR")";
	if( ob->query_condition("burn") )
		condition += HIR"(����)";
	if( ob->query_condition("mess") )
		condition += HIM"(����)";
	if( ob->query_condition("power-down") )
		condition += HIB"(����)";
	if( ob->query_condition("keeup") )
		condition += HIW"(��������)";
    if( ob->query_condition("hellfire") )
		condition += HIR"(����֮��)";
	if( ob->query_condition("ice") )
		condition += HIW"(����Ϯ��)";
	if( ob->query_condition("hellthunder") )
		condition += HIC"(��������)";
	if( ob->query_condition("blade") )
        	condition += HIY"(����)";
    if( ob->query_condition("ad-blade") )
        	condition += BLU"(�޼�����)";
	if( ob->query_condition("cold") )
                condition += HIW"(����)";
   if( ob->query_condition("u-stial") )
   condition += HIG"(����)";
        if( ob->query_condition("star-stial") || ob->query_condition("hart") )
		condition += HIY"(����)";
	if( ob->query_condition("bleeding") )
		condition += HIR"(��Ѫ)";

// ����

	if( ob->query_condition("drunk") )
        	condition += HIG"(����)";
	if( ob->query_temp("ref_shield") )
        	condition += HIC"���������塵";
	if( ob->query_temp("mana_shield") )
        	condition += HIW"������֮��";
	if( ob->query_temp("mana_shield2") )
        	condition += HIY"������֮��";
	if( ob->query_temp("mana_shield3") )
        	condition += HIY"������֮��";
	if( ob->query_temp("mana_shield4") )
       	condition += HIY"������֮��";
        if( ob->query_temp("superforce")==1 )
                condition += HIW"�������̡�";
        if( ob->query_temp("superforce")==2 )
                condition += HIM"��õ��ϼ��";
        if( ob->query_temp("superforce")==3 )
                condition += YEL"�������ء�";
        if( ob->query_temp("superforce")==4 )
                condition += HIC"����ѩ����";
        if( ob->query_temp("superforce")==5 )
                condition += MAG"�����Ǻӡ�";
        if( ob->query_temp("superforce")==6 )
                condition += WHT"�������硵";
        if( ob->query_temp("superforce")==7 )
                condition += HIB"����׺���";
        if( ob->query_temp("superforce")==8 )
                condition += HIY"�����ء�";
        if( ob->query_temp("superforce")==9 )
                condition += HIR"��Ѫ�ԡ�";
        if( ob->query_temp("superforce")==10 )
                condition += HIG"�������桵";

        if( condition )
        	return condition + NOR;
        return "";
}
