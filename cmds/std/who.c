// who.c
// rewrited by wade
// �Ҵ�ͷ��β��д��, �����ϻ����һ���.
// ����ʦ��������, �������, ������ǰ�� class, guild �ȵ�ѡ��
// ���¸�д by Chan ���ʹ�ò��������� ֻ��who�����κξ�����
#include <net/dns.h>
inherit F_CLEAN_UP;

string age_string(int);
int sort_age(object ob1, object ob2);
int sort_ip(object ob1, object ob2);
int sort_exp(object ob1, object ob2);
int sort_g(object ob1, object ob2);
int sort_c(object ob1, object ob2);
int help();

mixed main(object me, string arg, int remote)
{
  string  str;
  string  *option, tmp;
  object  *list, *list_tmp;
  int     j, ppl_cnt, count;
  int     opt_long, opt_id, opt_ip;
  int     opt_c, opt_g, opt_age, opt_exp;
  int     wiz;

  seteuid(getuid());

  if(!me) return 0;
  wiz = wiz_level(me);
  //���ʹ�ò��������� by chan
  if (!wiz && (me->query("sen") < 21 || me->query("gin") < 21))
    return notify_fail ("��ľ���̫����, �޷�ʹ�� who.\n");
  if ( arg ) {
    if (wiz && arg[0]=='@') {
      RWHO_Q->send_rwho_q(option[j][1..sizeof(option[j])], me, 0);
      write("��·ѶϢ���ͳ������Ժ�\n");
      return 1;
    }
    option = explode(arg, " ");
    j = sizeof(option);
    while ( j-- )
      switch (option[j]) {
        case "-l"  :    opt_long = 1; break;
        case "-i"  :    opt_id   = 1; break;
        case "-ip" :    opt_ip   = 1; break;
        case "-c"  :    opt_c    = 1; break;
        case "-g"  :    opt_g    = 1; break;
        case "-age":    opt_age  = 1; break;
        case "-exp":    opt_exp  = 1; break;
      }
  }

  // �������.
  list = children("/obj/user");
  ppl_cnt = sizeof(list);
  list_tmp = ({});
  count = 0;

  // �����Ƿ������������, ��ʦ��������Ҳ�ͬ
  // ��ҿ�������ʦ.
  j = ppl_cnt;
  while( j-- ) {
        // �������ɫ������û��Ҫ��
        if (!environment(list[j]) || !list[j]->query("id")) continue;
        // ����Ĵ���
        if (list[j]->query("env/����") &&               // �����趨����
            wiz < 7 &&                                  // ���ܶ� manager ����
            wiz_level(list[j]) &&                       // ��Ҳ���������
            wiz_level(list[j]) > wiz )                  // ���ǲ��ɶ��ϼ�����
        {
          continue;
        }
        list_tmp += ({ list[j] });
        if (wizardp(list[j])) count++;                  // count ��¼��ʦ����
  }

  // ����˳��
  list = list_tmp;
  if (opt_ip)
    list = sort_array(list_tmp, "sort_ip", this_object());
  else if (opt_age)
    list = sort_array(list_tmp, "sort_age", this_object());
  else if (opt_exp)
    list = sort_array(list_tmp, "sort_exp", this_object());
  else if (opt_g)
    list = sort_array(list_tmp, "sort_guild", this_object());
  else if (opt_c)
    list = sort_array(list_tmp, "sort_class", this_object());
  else if (wiz)
    list = sort_array(list_tmp, "sort_ip", this_object());
//����û��ָ��Ҫ����һ�ɲ����� by Chan
  // ��ʾѶϢ
  str = ("�� " + MUD_NAME + "\n");
  str += ("����������������������������������������������"
          "����������������������������\n");
  str = sprintf ("%s���� %d λ��ʦ�� %d λ��ң�ϵͳ������%s\n",
          str, count, sizeof(list)-count,
          query_load_average()
         );
  str += ("����������������������������������������������"
         "����������������������������\n");

	if( opt_age || opt_id || opt_exp || opt_g || opt_c ) {
		for( j=0; j<sizeof(list); j++ ) {// to list clan name & check margin by babe
			tmp = sprintf( "%s%s(%s)",
				( list[j]->query("title") ?
					list[j]->query("title") : "" )+
				( list[j]->query("nickname") ?
					"��"+list[j]->query("nickname")+"��" : " " ),
				list[j]->query("name"),
				list[j]->query("id")
				);
			if( strlen(tmp)>270 )
				tmp = tmp[0..53-strlen(tmp)];
			str = sprintf("%s%12s[1;36m��[1;37m%|10s[1;36m��[0m %-s\n",
				str,
				RANK_D->query_rank(list[j]),
				list[j]->query("clan/name") ?
					list[j]->query("clan/name") :
					"��������",
				tmp );
		}
	if( !wiz ) {
		me->receive_damage("sen", 20);
		me->receive_damage("gin", 20);
	}
	str += "--\n  ������ר�ĵز���\�����˵����ϣ��ķѲ��پ���\n";
  }
  else if(!wiz) { //û��ָ������ʱ,���ֵ�ѶϢ,����while��for��һ�� by chan
        ppl_cnt = 0;
        j = sizeof(list);     //����es2���㷨����....by chan
        while( j-- ) {
         if( !environment(list[j]) ) continue;
         if( me && !me->visible(list[j]) ) continue;
         str = sprintf("%s%-15s%s",
          str,
          opt_id ? capitalize(list[j]->query("id")): list[j]->name(1),
          (ppl_cnt%5==4? "\n": ""));
          ppl_cnt++;
       }//���ϵ��߻��һ��
        if( ppl_cnt%5 ) str += "\n";
       str += "��������������������������������������������������������������������������\n";
       str = sprintf("%s\n", str);
  }
  else //��ʦ�Ĳ���
    for (j=0; j<sizeof(list); j++)
        str = sprintf ("%s%12s %14s%-12s %8s %-15s %2s%2s%2s%2s%s\n",
                 str,
                 RANK_D->query_rank(list[j]),
                 list[j]->name(1),
                 "("+(list[j]->query("id"))+")",
                 age_string ((int)list[j]->query("mud_age")),
                 list[j]->query("last_from"),
                 list[j]->query_temp("netdead")?"��":"",
                 environment(list[j])?"":"��",
                 in_edit(list[j])?"��":"",
                 in_input(list[j])?"��":"",
                 (interactive(list[j]) && query_idle(list[j]) > 120)?
                        "��"+query_idle(list[j])/60+"��":""
                );

  str=trans_color(str);
  if (remote) return str;
  me->start_more (str);
  return 1;
}

int sort_c(object ob1, object ob2)
{
  int  level;

  level = wiz_level(ob1) - wiz_level(ob2);
  if (level != 0)
    return -level;
  else
    return strcmp(ob1->query("class"),
                  ob2->query("class"));
}

int sort_g(object ob1, object ob2)
{
  int  level;

  level = wiz_level(ob1) - wiz_level(ob2);
  if (level != 0)
    return -level;
  else
    return strcmp(ob1->query("family/family_name"),
                  ob2->query("family/family_name"));
}

int sort_exp(object ob1, object ob2)
{
  int  level;

  level = wiz_level(ob1) - wiz_level(ob2);
  if (level != 0)
    return -level;
  else
    return (int)ob2->query("combat_exp") - (int)ob1->query("combat_exp");
}

int sort_age(object ob1, object ob2)
{
  int  level;

  level = wiz_level(ob1) - wiz_level(ob2);
  if (level != 0)
    return -level;
  else
    return (int)ob2->query("mud_age") - (int)ob1->query("mud_age");
}

int sort_ip(object ob1, object ob2)
{
  int  level;

  if (!interactive(ob1) || !interactive(ob2)) return 0;

  level = wiz_level(ob1) - wiz_level(ob2);
  if (level != 0)
    return -level;
  else if (stringp(ob1->query("last_from")) &&
     stringp(ob2->query("last_from")))
    return -strcmp(ob1->query("last_from"), ob2->query("last_from"));
}

string age_string(int time)
{
  int month, day, hour;

  time /= 3600;
  hour = time % 24;
  time /= 24;
  day = time % 30;
  month = time / 30;
  return (month?month + "m":"") + (day?day + "d":"") + hour + "h";
}

int help()
{
write(@HELP
ָ���ʽ : who [-l | -i | -ip | -c | -g | -age | -exp ]

ʹ��˵�� :
        ���ָ������г����������ϵ���Ҽ���ȼ����ǻ���񼰾���

        -l ѡ���г��ϳ���ѶϢ��
        -i ֻ�г���ҵ�Ӣ�Ĵ��š�
        -ip �� ip ����˳�� <��ʦԤ��>
        -age ��������
        -exp ��ս������ֵ��
        -c <ְҵ����> �г���ְҵ�������ߡ�
        -g <��������> �г������ɵ��������ߡ�

���ָ� finger
HELP
    );
    return 1;
}
