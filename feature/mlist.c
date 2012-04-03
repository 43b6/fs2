// mlist.c

#include <ansi.h>
#include <dbase.h>

mapping mlists;
mapping mlearned;

mapping query_mlists() { return mlists; }
mapping query_mlearned() { return mlearned; }

void set_mlist(string mlist, int val)
{
        if( !mapp(mlists) ) mlists = ([ mlist: val ]);
        else mlists[mlist] = val;
}

int delete_mlist(string mlist)
{
        if( mapp(mlists) ) {
                map_delete(mlists, mlist);
                if( mapp(mlearned) ) {
                        map_delete(mlearned, mlist);
                        return undefinedp(mlearned[mlist]);
                }
                return undefinedp(mlists[mlist]);
        }
        return 0;
}

varargs int query_mlist(string mlist, int raw)
{
        if( mapp(mlists) && !undefinedp(mlists[mlist]) ) return mlists[mlist];
        return 0;
}

varargs void improve_mlist(string mlist, int amount, int weak_mode)
{

  if( !weak_mode || !userp(this_object()) ) {
    if( !mapp(mlists) ) mlists = ([]);
    if( undefinedp(mlists[mlist]) ) mlists[mlist] = 0;
  }
  if( !amount ) amount = 1;

  if( !mapp(mlearned) ) mlearned = ([ mlist : amount ]);
  else (int)mlearned[mlist] += amount;

  if( (!weak_mode || !userp(this_object()))
  &&     mlearned[mlist] > 10 * mlists[mlist] * mlists[mlist] ) {
    mlists[mlist]++;
    mlearned[mlist] = 0;

  tell_object(this_object(), HIC "��ɰ���С������" + to_chinese(mlist) + HIC"������һ���ˣ�\n"
 NOR);
  }
}

