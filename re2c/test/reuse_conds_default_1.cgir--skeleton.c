/* Generated by re2c */

#include <stdio.h>
#include <stdlib.h> /* malloc, free */

static void *read_file
    ( const char *fname
    , size_t unit
    , size_t padding
    , size_t *pfsize
    )
{
    void *buffer = NULL;
    size_t fsize = 0;

    /* open file */
    FILE *f = fopen(fname, "rb");
    if(f == NULL) {
        goto error;
    }

    /* get file size */
    fseek(f, 0, SEEK_END);
    fsize = (size_t) ftell(f) / unit;
    fseek(f, 0, SEEK_SET);

    /* allocate memory for file and padding */
    buffer = malloc(unit * (fsize + padding));
    if (buffer == NULL) {
        goto error;
    }

    /* read the whole file in memory */
    if (fread(buffer, unit, fsize, f) != fsize) {
        goto error;
    }

    fclose(f);
    *pfsize = fsize;
    return buffer;

error:
    fprintf(stderr, "error: cannot read file '%s'\n", fname);
    free(buffer);
    if (f != NULL) {
        fclose(f);
    }
    return NULL;
}

enum YYCONDTYPE {
    yycr1,
    yycr2,
};


#define YYCTYPE unsigned char
#define YYKEYTYPE unsigned char
#define YYPEEK() *cursor
#define YYSKIP() ++cursor
#define YYLESSTHAN(n) (limit - cursor) < n
#define YYFILL(n) { break; }

static int action_line22_r1
    ( unsigned int i
    , const YYKEYTYPE *keys
    , const YYCTYPE *start
    , const YYCTYPE *token
    , const YYCTYPE **cursor
    , YYKEYTYPE rule_act
    )
{
    const long pos = token - start;
    const long len_act = *cursor - token;
    const long len_exp = (long) keys [3 * i + 1];
    const YYKEYTYPE rule_exp = keys [3 * i + 2];
    if (rule_exp == 255) {
        fprintf
            ( stderr
            , "warning: lex_line22_r1: control flow is undefined for input"
                " at position %ld, rerun re2c with '-W'\n"
            , pos
            );
    }
    if (len_act == len_exp && rule_act == rule_exp) {
        const YYKEYTYPE offset = keys[3 * i];
        *cursor = token + offset;
        return 0;
    } else {
        fprintf
            ( stderr
            , "error: lex_line22_r1: at position %ld (iteration %u):\n"
                "\texpected: match length %ld, rule %u\n"
                "\tactual:   match length %ld, rule %u\n"
            , pos
            , i
            , len_exp
            , rule_exp
            , len_act
            , rule_act
            );
        return 1;
    }
}

int lex_line22_r1()
{
    const size_t padding = 1; /* YYMAXFILL */
    int status = 0;
    size_t input_len = 0;
    size_t keys_count = 0;
    YYCTYPE *input = NULL;
    YYKEYTYPE *keys = NULL;
    const YYCTYPE *cursor = NULL;
    const YYCTYPE *limit = NULL;
    const YYCTYPE *token = NULL;
    const YYCTYPE *eof = NULL;
    unsigned int i = 0;

    input = (YYCTYPE *) read_file
        ("reuse_conds_default_1.cgir--skeleton.c.line22_r1.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ("reuse_conds_default_1.cgir--skeleton.c.line22_r1.keys"
        , 3 * sizeof (YYKEYTYPE)
        , 0
        , &keys_count
        );
    if (keys == NULL) {
        status = 1;
        goto end;
    }

    cursor = input;
    limit = input + input_len + padding;
    eof = input + input_len;

    for (i = 0; status == 0 && i < keys_count; ++i) {
        token = cursor;
        YYCTYPE yych;

        if (YYLESSTHAN (1)) YYFILL(1);
        yych = YYPEEK ();
        {
            static void *yytarget[256] = {
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy5,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy7,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy9,  &&yy11, &&yy13, &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3
            };
            goto *yytarget[yych];
        }
yy3:
        YYSKIP ();
        status = action_line22_r1(i, keys, input, token, &cursor, 7);
        continue;
yy5:
        YYSKIP ();
        status = action_line22_r1(i, keys, input, token, &cursor, 254);
        continue;
yy7:
        YYSKIP ();
        status = action_line22_r1(i, keys, input, token, &cursor, 5);
        continue;
yy9:
        YYSKIP ();
        status = action_line22_r1(i, keys, input, token, &cursor, 6);
        continue;
yy11:
        YYSKIP ();
        status = action_line22_r1(i, keys, input, token, &cursor, 2);
        continue;
yy13:
        YYSKIP ();
        status = action_line22_r1(i, keys, input, token, &cursor, 3);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line22_r1: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line22_r1: unused keys left after %u iterations\n", i);
        }
    }

end:
    free(input);
    free(keys);

    return status;
}

#undef YYCTYPE
#undef YYKEYTYPE
#undef YYPEEK
#undef YYSKIP
#undef YYLESSTHAN
#undef YYFILL

#define YYCTYPE unsigned char
#define YYKEYTYPE unsigned char
#define YYPEEK() *cursor
#define YYSKIP() ++cursor
#define YYLESSTHAN(n) (limit - cursor) < n
#define YYFILL(n) { break; }

static int action_line22_r2
    ( unsigned int i
    , const YYKEYTYPE *keys
    , const YYCTYPE *start
    , const YYCTYPE *token
    , const YYCTYPE **cursor
    , YYKEYTYPE rule_act
    )
{
    const long pos = token - start;
    const long len_act = *cursor - token;
    const long len_exp = (long) keys [3 * i + 1];
    const YYKEYTYPE rule_exp = keys [3 * i + 2];
    if (rule_exp == 255) {
        fprintf
            ( stderr
            , "warning: lex_line22_r2: control flow is undefined for input"
                " at position %ld, rerun re2c with '-W'\n"
            , pos
            );
    }
    if (len_act == len_exp && rule_act == rule_exp) {
        const YYKEYTYPE offset = keys[3 * i];
        *cursor = token + offset;
        return 0;
    } else {
        fprintf
            ( stderr
            , "error: lex_line22_r2: at position %ld (iteration %u):\n"
                "\texpected: match length %ld, rule %u\n"
                "\tactual:   match length %ld, rule %u\n"
            , pos
            , i
            , len_exp
            , rule_exp
            , len_act
            , rule_act
            );
        return 1;
    }
}

int lex_line22_r2()
{
    const size_t padding = 1; /* YYMAXFILL */
    int status = 0;
    size_t input_len = 0;
    size_t keys_count = 0;
    YYCTYPE *input = NULL;
    YYKEYTYPE *keys = NULL;
    const YYCTYPE *cursor = NULL;
    const YYCTYPE *limit = NULL;
    const YYCTYPE *token = NULL;
    const YYCTYPE *eof = NULL;
    unsigned int i = 0;

    input = (YYCTYPE *) read_file
        ("reuse_conds_default_1.cgir--skeleton.c.line22_r2.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ("reuse_conds_default_1.cgir--skeleton.c.line22_r2.keys"
        , 3 * sizeof (YYKEYTYPE)
        , 0
        , &keys_count
        );
    if (keys == NULL) {
        status = 1;
        goto end;
    }

    cursor = input;
    limit = input + input_len + padding;
    eof = input + input_len;

    for (i = 0; status == 0 && i < keys_count; ++i) {
        token = cursor;
        YYCTYPE yych;

        if (YYLESSTHAN (1)) YYFILL(1);
        yych = YYPEEK ();
        if (yych <= '`') {
            if (yych == '\n') goto yy20;
        } else {
            if (yych <= 'a') goto yy22;
            if (yych == 'c') goto yy24;
        }
        YYSKIP ();
        status = action_line22_r2(i, keys, input, token, &cursor, 7);
        continue;
yy20:
        YYSKIP ();
        status = action_line22_r2(i, keys, input, token, &cursor, 254);
        continue;
yy22:
        YYSKIP ();
        status = action_line22_r2(i, keys, input, token, &cursor, 6);
        continue;
yy24:
        YYSKIP ();
        status = action_line22_r2(i, keys, input, token, &cursor, 4);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line22_r2: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line22_r2: unused keys left after %u iterations\n", i);
        }
    }

end:
    free(input);
    free(keys);

    return status;
}

#undef YYCTYPE
#undef YYKEYTYPE
#undef YYPEEK
#undef YYSKIP
#undef YYLESSTHAN
#undef YYFILL

#define YYCTYPE unsigned char
#define YYKEYTYPE unsigned char
#define YYPEEK() *cursor
#define YYSKIP() ++cursor
#define YYLESSTHAN(n) (limit - cursor) < n
#define YYFILL(n) { break; }

static int action_line32_r1
    ( unsigned int i
    , const YYKEYTYPE *keys
    , const YYCTYPE *start
    , const YYCTYPE *token
    , const YYCTYPE **cursor
    , YYKEYTYPE rule_act
    )
{
    const long pos = token - start;
    const long len_act = *cursor - token;
    const long len_exp = (long) keys [3 * i + 1];
    const YYKEYTYPE rule_exp = keys [3 * i + 2];
    if (rule_exp == 255) {
        fprintf
            ( stderr
            , "warning: lex_line32_r1: control flow is undefined for input"
                " at position %ld, rerun re2c with '-W'\n"
            , pos
            );
    }
    if (len_act == len_exp && rule_act == rule_exp) {
        const YYKEYTYPE offset = keys[3 * i];
        *cursor = token + offset;
        return 0;
    } else {
        fprintf
            ( stderr
            , "error: lex_line32_r1: at position %ld (iteration %u):\n"
                "\texpected: match length %ld, rule %u\n"
                "\tactual:   match length %ld, rule %u\n"
            , pos
            , i
            , len_exp
            , rule_exp
            , len_act
            , rule_act
            );
        return 1;
    }
}

int lex_line32_r1()
{
    const size_t padding = 1; /* YYMAXFILL */
    int status = 0;
    size_t input_len = 0;
    size_t keys_count = 0;
    YYCTYPE *input = NULL;
    YYKEYTYPE *keys = NULL;
    const YYCTYPE *cursor = NULL;
    const YYCTYPE *limit = NULL;
    const YYCTYPE *token = NULL;
    const YYCTYPE *eof = NULL;
    unsigned int i = 0;

    input = (YYCTYPE *) read_file
        ("reuse_conds_default_1.cgir--skeleton.c.line32_r1.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ("reuse_conds_default_1.cgir--skeleton.c.line32_r1.keys"
        , 3 * sizeof (YYKEYTYPE)
        , 0
        , &keys_count
        );
    if (keys == NULL) {
        status = 1;
        goto end;
    }

    cursor = input;
    limit = input + input_len + padding;
    eof = input + input_len;

    for (i = 0; status == 0 && i < keys_count; ++i) {
        token = cursor;
        YYCTYPE yych;

        if (YYLESSTHAN (1)) YYFILL(1);
        yych = YYPEEK ();
        {
            static void *yytarget[256] = {
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy5,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy7,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy9,  &&yy11, &&yy13, &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,
                &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3,  &&yy3
            };
            goto *yytarget[yych];
        }
yy3:
        YYSKIP ();
        status = action_line32_r1(i, keys, input, token, &cursor, 7);
        continue;
yy5:
        YYSKIP ();
        status = action_line32_r1(i, keys, input, token, &cursor, 254);
        continue;
yy7:
        YYSKIP ();
        status = action_line32_r1(i, keys, input, token, &cursor, 5);
        continue;
yy9:
        YYSKIP ();
        status = action_line32_r1(i, keys, input, token, &cursor, 6);
        continue;
yy11:
        YYSKIP ();
        status = action_line32_r1(i, keys, input, token, &cursor, 2);
        continue;
yy13:
        YYSKIP ();
        status = action_line32_r1(i, keys, input, token, &cursor, 3);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line32_r1: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line32_r1: unused keys left after %u iterations\n", i);
        }
    }

end:
    free(input);
    free(keys);

    return status;
}

#undef YYCTYPE
#undef YYKEYTYPE
#undef YYPEEK
#undef YYSKIP
#undef YYLESSTHAN
#undef YYFILL

#define YYCTYPE unsigned char
#define YYKEYTYPE unsigned char
#define YYPEEK() *cursor
#define YYSKIP() ++cursor
#define YYLESSTHAN(n) (limit - cursor) < n
#define YYFILL(n) { break; }

static int action_line32_r2
    ( unsigned int i
    , const YYKEYTYPE *keys
    , const YYCTYPE *start
    , const YYCTYPE *token
    , const YYCTYPE **cursor
    , YYKEYTYPE rule_act
    )
{
    const long pos = token - start;
    const long len_act = *cursor - token;
    const long len_exp = (long) keys [3 * i + 1];
    const YYKEYTYPE rule_exp = keys [3 * i + 2];
    if (rule_exp == 255) {
        fprintf
            ( stderr
            , "warning: lex_line32_r2: control flow is undefined for input"
                " at position %ld, rerun re2c with '-W'\n"
            , pos
            );
    }
    if (len_act == len_exp && rule_act == rule_exp) {
        const YYKEYTYPE offset = keys[3 * i];
        *cursor = token + offset;
        return 0;
    } else {
        fprintf
            ( stderr
            , "error: lex_line32_r2: at position %ld (iteration %u):\n"
                "\texpected: match length %ld, rule %u\n"
                "\tactual:   match length %ld, rule %u\n"
            , pos
            , i
            , len_exp
            , rule_exp
            , len_act
            , rule_act
            );
        return 1;
    }
}

int lex_line32_r2()
{
    const size_t padding = 1; /* YYMAXFILL */
    int status = 0;
    size_t input_len = 0;
    size_t keys_count = 0;
    YYCTYPE *input = NULL;
    YYKEYTYPE *keys = NULL;
    const YYCTYPE *cursor = NULL;
    const YYCTYPE *limit = NULL;
    const YYCTYPE *token = NULL;
    const YYCTYPE *eof = NULL;
    unsigned int i = 0;

    input = (YYCTYPE *) read_file
        ("reuse_conds_default_1.cgir--skeleton.c.line32_r2.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ("reuse_conds_default_1.cgir--skeleton.c.line32_r2.keys"
        , 3 * sizeof (YYKEYTYPE)
        , 0
        , &keys_count
        );
    if (keys == NULL) {
        status = 1;
        goto end;
    }

    cursor = input;
    limit = input + input_len + padding;
    eof = input + input_len;

    for (i = 0; status == 0 && i < keys_count; ++i) {
        token = cursor;
        YYCTYPE yych;

        if (YYLESSTHAN (1)) YYFILL(1);
        yych = YYPEEK ();
        if (yych <= '`') {
            if (yych != '\n') goto yy19;
        } else {
            if (yych <= 'a') goto yy21;
            if (yych == 'c') goto yy23;
            goto yy19;
        }
yy19:
        YYSKIP ();
        status = action_line32_r2(i, keys, input, token, &cursor, 7);
        continue;
yy21:
        YYSKIP ();
        status = action_line32_r2(i, keys, input, token, &cursor, 6);
        continue;
yy23:
        YYSKIP ();
        status = action_line32_r2(i, keys, input, token, &cursor, 4);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line32_r2: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line32_r2: unused keys left after %u iterations\n", i);
        }
    }

end:
    free(input);
    free(keys);

    return status;
}

#undef YYCTYPE
#undef YYKEYTYPE
#undef YYPEEK
#undef YYSKIP
#undef YYLESSTHAN
#undef YYFILL

int main()
{
    if(lex_line22_r1() != 0) {
        return 1;
    }
    if(lex_line22_r2() != 0) {
        return 1;
    }
    if(lex_line32_r1() != 0) {
        return 1;
    }
    if(lex_line32_r2() != 0) {
        return 1;
    }
    return 0;
}
 	 !"#$%&'()*+,-./023456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`defghijklmnopqrstuvwxyz{|}~��������������������������������������������������������������������������������������������������������������������������������
1abc� 	 !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`bdefghijklmnopqrstuvwxyz{|}~��������������������������������������������������������������������������������������������������������������������������������
ac� 	 !"#$%&'()*+,-./013456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`defghijklmnopqrstuvwxyz{|}~��������������������������������������������������������������������������������������������������������������������������������
2abc� 	 !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`bdefghijklmnopqrstuvwxyz{|}~��������������������������������������������������������������������������������������������������������������������������������ac
 �re2c: warning: line 32: control flow in condition 'r2' is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
