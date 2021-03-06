// chinese_d.c
// A minor chinese-english or english-chinese converter.
// by Annihilator@Eastern.Stories 09-27-93
// adapted for ES2-lib 01-18-95

#include <localtime.h>

#define DICTIONARY DATA_DIR + "chinese"

inherit F_SAVE;

static string *c_digit = ({ "零","十","百","千","万","亿","兆" });
static string *c_num = ({"零","一","二","三","四","五","六","七","八","九","十"});
static string *sym_tien = ({ "甲","乙","丙","丁","戊","己","庚","辛","壬","癸" });
static string *sym_dee = ({ "子","丑","寅","卯","辰","巳","午","未","申","酉","戌","亥" });


mapping dict = ([]);

void add_translate( string key, string chinz );
void remove_translate( string key );

void create()
{
	seteuid(geteuid());
	restore();
}

// void remove() { save(); }

string chinese_number(int i)
{
	if( i<0 ) return "负" + chinese_number(-i);
	if( i<11 ) return c_num[i];
	if( i<20 ) return c_num[10] + c_num[i-10];
	if( i<100 ) {
		if( i%10 ) return c_num[i/10] + c_digit[1] + c_num[i%10];
		else return c_num[i/10] + c_digit[1];
	}
	if( i<1000 ) {
		if( i%100==0 )
			return c_num[i/100] + c_digit[2];
		else if( i%100 < 10 )
			return c_num[i/100] + c_digit[2] + c_num[0] + chinese_number(i%100);
		else if( i%100 < 20 )
			return c_num[i/100] + c_digit[2] + c_num[1] + chinese_number(i%100);
		else return c_num[i/100] + c_digit[2] + chinese_number(i%100);
	}
	if( i<10000 ) {
		if( i%1000==0 )
			return c_num[i/1000] + c_digit[3];
		else if( i%1000 < 100 )
			return c_num[i/1000] + c_digit[3] + c_digit[0] + chinese_number(i%1000);
		else
			return c_num[i/1000] + c_digit[3] + chinese_number(i%1000);
	}
	if( i<100000000 ) {
		if( i%10000==0 )
			return chinese_number(i/10000) + c_digit[4];
		else if( i%10000 < 1000 )
			return chinese_number(i/10000) + c_digit[4] + c_digit[0] + chinese_number(i%10000);
		else
			return chinese_number(i/10000) + c_digit[4] + chinese_number(i%10000);
	}
	if( i<1000000000000 ) {
		if( i%100000000==0 )
			return chinese_number(i/100000000) + c_digit[5];
		else if( i%100000000 < 10000000 )
			return chinese_number(i/100000000) + c_digit[5] + c_digit[0] + chinese_number(i%100000000);
		else
			return chinese_number(i/100000000) + c_digit[5] + chinese_number(i%100000000);
	}
		if( i%1000000000000==0 )
			return chinese_number(i/1000000000000) + c_digit[6];
		else if( i%1000000000000 < 100000000000 )
			return chinese_number(i/1000000000000) + c_digit[6] + c_digit[0] + chinese_number(i%1000000000000);
		else
			return chinese_number(i/1000000000000) + c_digit[6] + chinese_number(i%1000000000000);
}

string query_save_file() { return DICTIONARY; }

// This is called by to_chinese() simul_efun
string chinese(string str)
{
	if( !undefinedp( dict[str] ) ) return dict[str];
	else return str;
}

void remove_translate( string key )
{
  map_delete( dict, key );
  save();

  log_file ("chinese", sprintf("%s删除中文对应 %s 于%s\n",
    this_player()->short(), key, CHINESE_D->chinese_time(time()))
  );
}

void add_translate( string key, string chinz )
{
	dict[key] = chinz;
	save();
	log_file ("chinese", sprintf("%s设定 %s 对应到中文 %s 于%s\n",
	  this_player()->short(), key, chinz, CHINESE_D->chinese_time(time()))
	);
}

mapping query_translate()
{
  if( !undefinedp( dict )) return dict;
  else return ([]);
}

// 中式的时间
string chinese_date(int date)
{
        mixed *local;

        local = localtime(date);

        return sprintf("%s%s年%s月%s日%s时",
                sym_tien[local[LT_YEAR]%10], sym_dee[local[LT_YEAR]%12],
                chinese_number(local[LT_MON]+1),
                chinese_number(local[LT_MDAY] + (local[LT_HOUR]>23? 1 : 0)),
                sym_dee[local[LT_HOUR]/2]);
}

// 中文的时间
string chinese_time(int date)
{
        mixed *local;
	int   hour, min;
	string	msg;

        local = localtime(date);
        hour  = local[LT_HOUR];
	min = local[LT_MIN];

        msg = sprintf("狂想历%s年%s月%s日",
                chinese_number(local[LT_YEAR]-1911),
                chinese_number(local[LT_MON]+1),
                chinese_number(local[LT_MDAY])
	      );
	if ( (hour>12) )
	  msg += "下午"+chinese_number(hour-12)+"时";
        else msg += "上午"+chinese_number(hour)+"时";
        if (min==0)
	  msg += "整";
	else
	  msg += chinese_number(min)+"分";

	return msg;
}

// 转换时间区间为几天几小时几分几秒
string chinese_period(int sec)
{
  mixed *local;
  string msg;
  int    day, hour, min;

  day = sec/86400;
  sec = sec % 86400;
  hour = sec/3600;
  sec = sec % 3600;
  min = sec / 60;
  sec = sec % 60;
  msg = "";
  if (day>0) msg += chinese_number(day)+"天";
  if (hour>0) msg += chinese_number(hour)+"小时";
  if (min>0) msg += chinese_number(min)+"分";
  if (sec>0) msg += chinese_number(sec)+"秒";

  if (msg != "") msg += "钟";
  else msg = "零秒";
  return msg;
}

string ob_value (object ob)
{
        int value, gold, silver, coin;

        if(ob->query("money_id") )
                return sprintf("");
        value = ob->query("value");
        if( !value )
                return sprintf("%s一文不值。\n",ob->short());
        else
        {
          gold = value/10000;
          silver = (value%10000)/100;
          coin = value%10000%100;

          if (coin)
              return sprintf("%s值%s%s又%s文钱。\n", ob->short(),
                gold?chinese_number(gold)+"金":"",
                silver?chinese_number(silver)+"银":"",
                chinese_number(coin));
          else if (silver)
              return sprintf("%s值%s又%s两银子。\n", ob->short(),
                gold?chinese_number(gold)+"金":"",
                chinese_number(silver));
          else
              return sprintf("%s值%s两金子。\n", ob->short(),
                chinese_number(gold));
        }
}

// 拍卖会用到
string cvalue (int value)
{
        int gold, silver, coin;

        if( !value )
                return "没半毛钱。";
        else
        {
          gold = value/10000;
          silver = (value%10000)/100;
          coin = value%10000%100;

          if (coin)
              return sprintf("%s%s%s文钱",
                gold?chinese_number(gold)+"金":"",
                silver?chinese_number(silver)+"银":"",
                chinese_number(coin));
          else if (silver)
              return sprintf("%s%s两银子",
                gold?chinese_number(gold)+"金":"",
                chinese_number(silver));
          else
              return sprintf("%s两金子",
                chinese_number(gold));
        }
}

// for list in shop
string value_list (object ob)
{
  return sprintf ("%-55s%s", ob->short(), ob_value(ob));
}
