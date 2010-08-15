/****************************************************************************************
 * Copyright (c) 2010 Leo Franchi <lfranchi@kde.org>                                    *
 *                                                                                      *
 * This program is free software; you can redistribute it and/or modify it under        *
 * the terms of the GNU General Public License as published by the Free Software        *
 * Foundation; either version 2 of the License, or (at your option) any later           *
 * version.                                                                             *
 *                                                                                      *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY      *
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A      *
 * PARTICULAR PURPOSE. See the GNU General Public License for more details.             *
 *                                                                                      *
 * You should have received a copy of the GNU General Public License along with         *
 * this program.  If not, see <http://www.gnu.org/licenses/>.                           *
 ****************************************************************************************/

#include "Track.h"

#include "Track_p.h"

Echonest::Track::Track()
  : d( new QSharedDataPointer<Echonest::TrackData>( new Echonest::TrackData ) )
{

}

Echonest::Track::Track( const QByteArray& xmlData )
  : d( new QSharedDataPointer<Echonest::TrackData>( new Echonest::TrackData ) )
{
  // parse with QXmlStreamReader
}

QString Echonest::Track::artistName() const
{
  return d->artistName;
}

QString Echonest::Track::title() const
{
  return d->title;
}

QString Echonest::Track::analysisURL() const
{
  return d->analysisURL;
}

QString Echonest::Track::audioMD5() const
{
  return d->audioMD5;
}

QString Echonest::Track::audioURL() const
{
  return d->audioURL;
}

QString Echonest::Track::id() const
{
  return d->trackId;
}

QString Echonest::Track::previewURL() const
{
  return d->previewUrl;
}

QString Echonest::Track::albumName() const
{
  return d->albumName;
}

qreal Echonest::Track::duration() const
{
  return d->duration;
}

qreal Echonest::Track::loudness() const
{
  return d->loudness;
}

qreal Echonest::Track::tempo() const
{
  return d->tempo;
}


int Echonest::Track::mode() const
{
  return d->mode;
}

int Echonest::Track::key() const
{
  return d->key;
}

int Echonest::Track::timeSignature() const
{
  return d->timeSignature;
}

int Echonest::Track::bitrate() const
{
  return d->bitrate;
}

int Echonest::Track::samplerate() const
{
  return d->samplerate;
}

