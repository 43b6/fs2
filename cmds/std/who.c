// who.c
// rewrited by wade
// 我从头到尾改写过, 理论上会快上一点点.
// 让巫师可以隐形, 玩家则不行, 保留以前的 class, guild 等的选项
// 重新改写 by Chan 提高使用参数的限制 只打who不扣任何精、神
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
  //提高使用参数的限制 by chan
  if (!wiz && (me->query("sen") < 21 || me->query("gin") < 21))
    return notify_fail ("你的精神太差了, 无法使用 who.\n");
  if ( arg ) {
    if (wiz && arg[0]=='@') {
      RWHO_Q->send_rwho_q(option[j][1..sizeof(option[j])], me, 0);
      write("网路讯息已送出，请稍候。\n");
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

  // 所有玩家.
  list = children("/obj/user");
  ppl_cnt = sizeof(list);
  list_tmp = ({});
  count = 0;

  // 过滤是否出现在名单上, 巫师所见跟玩家不同
  // 玩家看不到巫师.
  j = ppl_cnt;
  while( j-- ) {
        // 正在造角色的我们没必要管
        if (!environment(list[j]) || !list[j]->query("id")) continue;
        // 隐身的处理
        if (list[j]->query("env/隐身") &&               // 可以设定隐身
            wiz < 7 &&                                  // 不能对 manager 隐身
            wiz_level(list[j]) &&                       // 玩家不能设隐身
            wiz_level(list[j]) > wiz )                  // 但是不可对上级隐身
        {
          continue;
        }
        list_tmp += ({ list[j] });
        if (wizardp(list[j])) count++;                  // count 记录巫师个数
  }

  // 排列顺序
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
//若都没有指令要看的一律不排序 by Chan
  // 显示讯息
  str = ("◎ " + MUD_NAME + "\n");
  str += ("───────────────────────"
          "──────────────\n");
  str = sprintf ("%s共有 %d 位巫师， %d 位玩家，系统负担：%s\n",
          str, count, sizeof(list)-count,
          query_load_average()
         );
  str += ("───────────────────────"
         "──────────────\n");

	if( opt_age || opt_id || opt_exp || opt_g || opt_c ) {
		for( j=0; j<sizeof(list); j++ ) {// to list clan name & check margin by babe
			tmp = sprintf( "%s%s(%s)",
				( list[j]->query("title") ?
					list[j]->query("title") : "" )+
				( list[j]->query("nickname") ?
					"「"+list[j]->query("nickname")+"”" : " " ),
				list[j]->query("name"),
				list[j]->query("id")
				);
			if( strlen(tmp)>270 )
				tmp = tmp[0..53-strlen(tmp)];
			str = sprintf("%s%12s[1;36mξ[1;37m%|10s[1;36mξ[0m %-s\n",
				str,
				RANK_D->query_rank(list[j]),
				list[j]->query("clan/name") ?
					list[j]->query("clan/name") :
					"独闯江湖",
				tmp );
		}
	if( !wiz ) {
		me->receive_damage("sen", 20);
		me->receive_damage("gin", 20);
	}
	str += "--\n  由于你专心地查阅\其他人的资料，耗费不少精神。\n";
  }
  else if(!wiz) { //没有指令排序时,出现的讯息,改用while比for好一点 by chan
        ppl_cnt = 0;
        j = sizeof(list);     //借用es2的算法如下....by chan
        while( j-- ) {
         if( !environment(list[j]) ) continue;
         if( me && !me->visible(list[j]) ) continue;
         str = sprintf("%s%-15s%s",
          str,
          opt_id ? capitalize(list[j]->query("id")): list[j]->name(1),
          (ppl_cnt%5==4? "\n": ""));
          ppl_cnt++;
       }//加上底线会好一点
        if( ppl_cnt%5 ) str += "\n";
       str += "─────────────────────────────────────\n";
       str = sprintf("%s\n", str);
  }
  else //巫师的部份
    for (j=0; j<sizeof(list); j++)
        str = sprintf ("%s%12s %14s%-12s %8s %-15s %2s%2s%2s%2s%s\n",
                 str,
                 RANK_D->query_rank(list[j]),
                 list[j]->name(1),
                 "("+(list[j]->query("id"))+")",
                 age_string ((int)list[j]->query("mud_age")),
                 list[j]->query("last_from"),
                 list[j]->query_temp("netdead")?"断":"",
                 environment(list[j])?"":"虚",
                 in_edit(list[j])?"编":"",
                 in_input(list[j])?"读":"",
                 (interactive(list[j]) && query_idle(list[j]) > 120)?
                        "呆"+query_idle(list[j])/60+"分":""
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
指令格式 : who [-l | -i | -ip | -c | -g | -age | -exp ]

使用说明 :
        这个指令可以列出所有在线上的玩家及其等级但是会扣神及精。

        -l 选项列出较长的讯息。
        -i 只列出玩家的英文代号。
        -ip 以 ip 排列顺序 <巫师预设>
        -age 以年龄排
        -exp 以战斗经验值排
        -c <职业代号> 列出该职业所有玩者。
        -g <门派名称> 列出该门派的所有玩者。

相关指令： finger
HELP
    );
    return 1;
}
