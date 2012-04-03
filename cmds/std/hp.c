// hp cmds

#include <ansi.h>

inherit F_CLEAN_UP;

string status_color(int current, int max);
string score_string(object ob);
string hero_string(object ob);

varargs int main( object me, string arg, int mode )
{
        object ob;
        mapping my;
        string status_desc="";

        seteuid(getuid(me));

        if(!arg)
                ob = me;
        else if (wizardp(me)) {
                ob = present(arg, environment(me));
                if (!ob) ob = find_player(arg);
                if (!ob) ob = find_living(arg);
                if (!ob) return notify_fail("��Ҫ�쿴˭��״̬��\n");
        } else
                return notify_fail("ֻ����ʦ�ܲ쿴���˵�״̬��\n");

	if( mode==1 )
		ob = me->query_temp("pal");

        my = ob->query_entire_dbase();

	printf( "����:%s%6d /%6d (%3d%%)"NOR+
                "  ����:%s%6d /%6d (+%2d)"NOR+
                "  ����/�ڿ�: %s%d%% / %s%d%%\n"NOR,
		status_color( my["gin"], my["max_gin"] ),
		my["gin"],
		my["eff_gin"],
		my["eff_gin"] * 100 / my["max_gin"],
		status_color( my["atman"], my["max_atman"] ),
                my["atman"], my["max_atman"],
                my["atman_factor"],
                status_color(my["food"], ob->max_food_capacity()),
                100-100*my["food"]/ob->max_food_capacity(),
                status_color(my["water"], ob->max_water_capacity()),
                100-100*my["water"]/ob->max_water_capacity() );
	printf( "��Ѫ:%s%6d /%6d (%3d%%)" NOR+
                "  ����:%s%6d /%6d (+%2d)" NOR+
                "  Ǳ��-����: %O(%O%%)\n"NOR,
                status_color( my["kee"], my["max_kee"]),
                my["kee"], my["eff_kee"],
                my["eff_kee"] * 100 / my["max_kee"],
                status_color(my["force"], my["max_force"]),
                my["force"], my["max_force"],
                my["force_factor"],
                (int)ob->query("potential") - (int)ob->query("learned_points"),
                (1 + (int)ob->query("learned_points")) * 100 / (1 + (int)ob->query("potential")));
	printf( "���:%s%6d /%6d (%3d%%)" NOR
                "  ����:%s%6d /%6d (+%2d)" NOR
                "  ʵս-����: %O\n",
                status_color(my["sen"], my["max_sen"]),
                my["sen"], my["eff_sen"],
                my["eff_sen"] * 100 / my["max_sen"],
                status_color(my["mana"], my["max_mana"]), my["mana"], my["max_mana"],
                my["mana_factor"],
                my["combat_exp"] );

	status_desc += CON_D->con_query(ob);
        status_desc += (ob->query_temp("medicine/plaster_power")?"[1;33m(Ϳҩ)[0m ":"");
        status_desc += (ob->query_temp("sun-moon")?"("HIY"껫h����"NOR") ":"");
        status_desc += (ob->query_temp("bloodkee")?"("HIR"Ѫɱ�ྡྷ"NOR") ":"");
        status_desc += (ob->query_temp("bloodfight")?"("HIR"Ѫħ����"NOR") ":"");
        status_desc += (ob->query_temp("no_power_sword")?"("HIY"����ɱ��"NOR") ":"");
        status_desc += (ob->query_temp("no_power_godsub")?"("HIC"�����ྡྷ"NOR") ":"");
        status_desc += (ob->query_temp("medicine/bandaged")?"[1m(����)[0m ":"");
        if( status_desc=="" ) status_desc += "��";
	printf("����: %s              ɱ��:"HIR"%6d"+NOR+"                ��ѧ-��Ϊ: %s\n",score_string(ob),my["bellicosity"],hero_string(ob));
	printf("״̬: %s\n", status_desc );
	return 1;
}

string status_color( int current, int max )
{
        int ratio;

        if( max>0 )
        	ratio = current * 100 / max;
        else
        	ratio = 100;
	if( ratio >100 ) return HIC;
        if( ratio > 90 ) return HIG;
        if( ratio > 80 ) return GRN;
        if( ratio > 60 ) return HIY;
        if( ratio > 40 ) return YEL;
        if( ratio > 20 ) return HIR;
		         return RED;
}

string score_string(object ob)
{
  int scores;
  string *ppl_desc;

  scores =scores+(ob->query("MKS")*2);
  scores =scores-(ob->query("PKS")*500);
  scores =scores-(ob->query("death/time")*300);
  scores =scores+(ob->query("pk_win")*40);
  scores =scores-(ob->query("pk_lose")*40);
  scores =scores+(ob->query("scores"));

       ppl_desc=({
        HIR"аħת��"NOR,
        HIR"�����ӯ"NOR,
        HIR"����"NOR,
        HIM"ɱ������"NOR,
        HIM"�޶���"NOR,
        HIC"��������"NOR,
        HIC"�Դ�а��"NOR,
        NOR"����С��"NOR,
        HIG"�Ĵ�����"NOR,
        HIG"�ȱ�Ϊ��"NOR,
        HIG"��������"NOR,
        HIW"����Ϊ��"NOR,
        HIW"��������"NOR,
        HIY"����Զ��"NOR,
        HIY"һ������"NOR,
        });

        if(scores <= -6000 )
                return ppl_desc[0];
      else if(scores <= -5000)
                return ppl_desc[1];
      else if(scores <= -4000)
                return ppl_desc[2];
      else if(scores <= -3000)
                return ppl_desc[3];
      else if(scores <= -2000)
                return ppl_desc[4];
      else if(scores <= -1000)
                return ppl_desc[5];
      else if(scores <= -500)
                return ppl_desc[6];
      else if(scores <= 500)
                return ppl_desc[7];
      else if(scores <= 1000)
                return ppl_desc[8];
      else if(scores <= 2000)
                return ppl_desc[9];
      else if(scores <= 3000)
                return ppl_desc[10];
      else if(scores <= 4000)
                return ppl_desc[11];
      else if(scores <= 5000)
                return ppl_desc[12];
      else if(scores <= 6000)
                return ppl_desc[13];
      else return ppl_desc[14];

}
string hero_string(object ob)
{
  int exp;
  string *ppl_desc;
  exp=ob->query("combat_exp");
  ppl_desc=({
        RED"�����ŵ�"NOR,
        HIR"�������"NOR,
        HIR"Ӧ������"NOR,
        BLU"����ս"NOR,
        HIB"��ѹȺ��"NOR,
        HIB"���Ī��"NOR,
        MAG"��Զ��ٱ"NOR,
	HIM"��������"NOR,
	GRN"�����뻯"NOR,
	HIG"��������"NOR,
	YEL"������"NOR,
	HIY"��������"NOR,
	CYN"�Ƿ��켫"NOR,
	HIC"������˫"NOR,
	HIW"ѧ������"NOR,
  });

        if(exp <= 100000)
                return ppl_desc[0];
   else if(exp <= 300000)
                return ppl_desc[1];
   else if(exp <= 600000)
                return ppl_desc[2];
   else if(exp <= 1000000)
                return ppl_desc[3];
   else if(exp <= 1500000)
                return ppl_desc[4];
   else if(exp <= 2000000)
                return ppl_desc[5];
   else if(exp <= 3000000)
                return ppl_desc[6];
   else if(exp <= 4000000)
                return ppl_desc[7];
   else if(exp <= 5000000)
                return ppl_desc[8];
   else if(exp <= 6000000)
                return ppl_desc[9];
   else if(exp <= 7000000)
                return ppl_desc[10];
   else if(exp <= 8000000)
                return ppl_desc[11];
   else if(exp <= 9000000)
                return ppl_desc[12];
   else if(exp <=10000000)
                return ppl_desc[13];
   else
                return ppl_desc[14];
}


int help(object me)
{
        write(@HELP
ָ���ʽ : hp
           hp <��������>                   (��ʦר��)
ָ��˵�� :
           ���ָ�������ʾ��(��)��ָ������(������)��
       ������������ֵ������������״����
�����ο� :
           score
HELP
    );
    return 1;
}
