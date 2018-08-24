\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble"

		\key a \major
                R2.*4  |
%% 5
                e' 4. e'  |
                cis' 4. cis' 4 cis' 8  |
                dis' 4. dis' 4 dis' 8  |
                b 4 _( b 8 ) b gis gis  |
                f' 4. dis'  |
%% 10
                cis' 2 cis' 8 cis'  |
                dis' 8 dis' dis' dis' dis' dis'  |
                b 2 gis 8 gis  |
                e' 4. d'  |
                cis' 2 cis' 8 cis'  |
%% 15
                d' 8 d' d' e' e' e'  |
                e' 2.  |
                R2.*2  |
                r4. r8 r e' 16 e'  |
%% 20
                e' 8 e' e' e' 4 e' 8  |
                f' 8 f' 4 _~ f' 8 f' f'  |
                f' 8 f' f' f' f' f'  |
                g' 8 g' g' g' 4.  |
                f' 8 f' f' f' f' f'  |
%% 25
                e' 2.  |
                e' 8 d' c' d' 4.  |
                f' 8 e' d' d' _( c' ) d'  |
                e' 4. e' _~  |
                e' 2.  |
%% 30
                e' 4. e'  |
                cis' 4. cis' 4 cis' 8  |
                dis' 4. dis' 4 dis' 8  |
                b 4 _( b 8 ) b gis gis  |
                f' 4. dis'  |
%% 35
                cis' 2 cis' 8 cis'  |
                dis' 8 dis' dis' dis' dis' dis'  |
                b 2 gis 8 gis  |
                e' 4. d'  |
                cis' 2 cis' 8 cis'  |
%% 40
                d' 8 d' d' e' e' e'  |
                e' 2. _~  |
                e' 2.  |
                R2.  |
                r4. r8 r e'  |
%% 45
                e' 8 e' e' e' e' e'  |
                f' 8 f' f' f' 4.  |
                e' 8 e' e' e' e' 4  |
                e' 8 _~ e' e' d' d' 4  |
                f' 8 _( e' ) d' d' c' d'  |
%% 50
                e' 4. e'  |
                r4. r8 e' e'  |
                e' 8 d' c' d' 4 d' 8  |
                f' 8 e' d' d' c' d'  |
                e' 2.  |
%% 55
                R2.  |
                e' 4. e'  |
                cis' 4. cis' 4 cis' 8  |
                dis' 4. dis' 4 dis' 8  |
                b 4 _~ b 8 b gis gis  |
%% 60
                f' 4. dis'  |
                cis' 2 cis' 8 cis'  |
                dis' 8 dis' dis' dis' dis' dis'  |
                b 2 gis 8 gis  |
                e' 4. d'  |
%% 65
                cis' 2 cis' 8 cis'  |
                d' 8 d' d' e' e' e'  |
                e' 2. _~  |
                e' 2.  |
                R2.  |
%% 70
                r4. r8 r e' 16 e'  |
                e' 4 e' 8 e' e' e' 16 e'  |
                d' 8 d' d' d' d' 4  |
                dis' 4 dis' 8 dis' dis' dis'  |
                e' 4 _~ e' 8 e' e' e'  |
%% 75
                gis' 4 gis' 8 gis' 4 gis' 8  |
                fis' 8 fis' 4 _~ fis' 4.  |
                g' 4 g' 8 g' _~ g' g'  |
                gis' 2 r8 r  |
                e' 4. gis'  |
%% 80
                a' 2.  |
                fis' 4. e'  |
                d' 2.  |
                e' 4. gis'  |
                a' 2.  |
%% 85
                fis' 4. e'  |
                e' 2.  |
                R2.*2  |
                d'' 4. cis''  |
%% 90
                d'' 4. cis'' 4 ^( b' 8 )  |
                a' 4. b'  |
                b' 4. r  |
                d'' 4. cis''  |
                d'' 4. cis'' 4 ^( b' 8 )  |
%% 95
                a' 4. b'  |
                b' 4. b'  |
                a' 2. _~  |
                a' 2.  |
                R2.*3  |
                \bar "|."
	}

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
		Glo -- ria, glo -- ria a Dios en el Cie -- lo,
		"y en" la tie -- rra paz
		a los hom -- bres que a -- "ma el" Se -- ñor,
		"y en" la tie -- rra paz
		a los hom -- bres que a -- "ma el" Se -- ñor. __

		"Te a" -- la -- ba -- mos, te ben -- de -- ci -- mos,
		"te a" -- do -- ra -- mos y glo -- ri -- fi -- ca -- mos, ¡oh, Dios,
		Pa -- dre y rey ce -- les -- tial!
		¡Glo -- "ria al" Se -- ñor, Dios to -- do -- po __ de -- ro -- so! __

		Glo -- ria, glo -- ria a Dios en el Cie -- lo,
		"y en" la tie -- rra paz
		a los hom -- bres que a -- "ma el" Se -- ñor,
		"y en" la tie -- rra paz
		a los hom -- bres que a -- "ma el" Se -- ñor. __

		Se -- ñor Je -- su -- cris -- to, Cor -- de -- ro de Dios,
		Hi -- jo del Pa -- dre,
		tú __ que qui -- tas el __ pe -- ca -- do del mun -- do...
		"...de" no -- so -- tros, ¡oh, Dios!
		a -- tien -- "de a" tu pue -- blo, Se -- ñor.


		Glo -- ria, glo -- ria a Dios en el Cie -- lo,
		"y en" la tie -- rra paz
		a los hom -- bres que a -- "ma el" Se -- ñor,
		"y en" la tie -- rra paz
		a los hom -- bres que a -- "ma el" Se -- ñor. __

		Tú "que es" -- tás sen -- ta -- "do a" la de -- re -- cha del Pa -- dre,
		ten pie -- dad de no -- so __ tros,
		por -- que só -- lo "tú e" -- res San -- to, __
		só -- lo tú, __ Se -- ñor...
		Uh uh uh. Uh uh uh.
		Uh uh uh. Uh uh uh.
		Se -- ñor, Se -- ñor, __ glo -- "ria a" ti...
		Se -- ñor, Se -- ñor, __ glo -- "ria a" ti, a -- mén. __
	}
>>
